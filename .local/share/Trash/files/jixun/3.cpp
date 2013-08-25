#include<cstdio>
#include<cstring>
#include<algorithm>
using namespace std;
int dragon[20005],knight[20005];
int main()
{
   int n,m,i,j,coin;
   while(scanf("%d %d",&n,&m))
   {
       if(n==0&&m==0)
           break;
       for(i=0;i<n;i++)
           scanf("%d",&dragon[i]);
       for(i=0;i<m;i++)
           scanf("%d",&knight[i]);
       if(m<n)
       {
           printf("Loowater is doomed");
           continue;
       }
       sort(dragon,dragon+n);
       sort(knight,knight+m);
       coin=0;
       i=0;
       j=0;
       int flag=1;
       while(i<n)
       {

           while(dragon[i]>knight[j])
               j++;
           if(j>m)
           {
               flag=0;
               break;
           }
           coin+=knight[j++];
           i++;
       }
       if(flag)
           printf("%d\n",coin);
       else
           printf("Loowater is doomea\n");
   }
   return 0;
}
               
