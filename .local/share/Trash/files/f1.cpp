#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
int v[9][9];
int dx,dy,t;
int flag;
void dfs(int x,int y,int c)
{
   int temp;
    if(flag)
     return ;
   temp=abs(1.0*dy-y)+abs(1.0*dx-x);
   if(temp>t-c)      //剪枝
      return ;
    temp=t-c-temp;
   if(temp%2||temp<0)//重要的奇偶剪枝
      return ;
   if(c==t)       //理论上这里应该（x==dx&&y==dy&&c==t）的，不知道为什么还是过了
     {flag=1;return ;}
   if(c>t)
     return ;
    v[x][y]=0;
    if(v[x+1][y])
      dfs(x+1,y,c+1);
    if(v[x-1][y])
      dfs(x-1,y,c+1);
    if(v[x][y+1])
      dfs(x,y+1,c+1);
    if(v[x][y-1])
      dfs(x,y-1,c+1);
    v[x][y]=1;
}
int main()
{
  //freopen("in.txt","r",stdin);
  int i,j,n,m,sx,sy;
  char c;
  while(scanf("%d%d%d",&n,&m,&t),n||m||t)
  {   memset(v,0,sizeof(v));
        getchar();
    for(i=1;i<=n;i++)
       { for(j=1;j<=m;j++)
          {
              c=getchar();
              switch(c)
              {
                 case '.':v[i][j]=1;break;
                 case 'S':v[i][j]=1;sx=i;sy=j;break;
                 case 'D':v[i][j]=1;dx=i;dy=j;break;
              }
          }
         getchar();
       }
     flag=0;
     dfs(sx,sy,0);
    if(flag)
      printf("YES\n");
     else
      printf("NO\n");
  }
  return 0;
}
