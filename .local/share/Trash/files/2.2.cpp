 #include<stdio.h>

#define min(a,b) ( a<b? a:b )

#define max(a,b) ( a>b? a:b )

int l[27],r[27],u[27],d[27];     //表示左右上下四个方向，用来确定一个长方形的边界

int k,p;

bool judge()

{

 int i,j;

 for(i=0;i<k;i++)

 for(j=i+1;j<k;j++)

 {

  if( l[i]==l[j] && r[i]==r[j] && u[i]==u[j] && d[i]==d[j] )

   return 0;

 }

 return 1;

}

int main()

{

 int t;

 int i,j,x,y;

 scanf("%d",&t);

 while(t--){

  scanf("%d%d",&k,&p);

  for(i=0;i<=26;i++)

  {

   l[i]=1000000;u[i]=1000000;

   r[i]=0;d[i]=0;

  }

  for(i=0;i<k;i++)

  for(j=0;j<p;j++)

  {

   scanf("%d%d",&x,&y);

   l[i]=min(l[i],x-1); r[i]=max(r[i],x);

   u[i]=min(u[i],y-1); d[i]=max(d[i],y);

  }

  for(i=0;i<k;i++)

  for(j=0;j<k;j++)

  {

   if(i!=j)

   if( l[i]<r[j] && l[i]>l[j] ) l[i]=l[j];

   if( r[i]<r[j] && r[i]>l[j] ) r[i]=r[j];

   if( u[i]<d[j] && u[i]>u[j] ) u[i]=u[j];

   if( d[i]<d[j] && d[i]>u[j] ) d[i]=d[j];

  }

  if( judge() ) printf("YES\n");

  else  printf("NO\n");

 }

 return 0;

}
