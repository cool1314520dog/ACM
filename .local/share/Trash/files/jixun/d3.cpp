#include<stdio.h>

#include<string.h>

#include<algorithm>

using namespace std;

int main()

{

    int dragon[20005],knight[20005];

    int n,m;

    int i,j;

    int coin;

    while(scanf("%d %d",&n,&m))

    {

       if(n==0&&m==0)

           break;

   

       for(i=0;i<n;i++)

           scanf("%d",&dragon[i]);

       for(i=0;i<m;i++)

           scanf("%d",&knight[i]);

      

       if(m<n)

       {printf("Loowater is doomed!\n");continue;}

      

       sort(dragon,dragon+n);

       sort(knight,knight+m);

      

       coin=0;

       j=0;

        i=0;

     bool flag=true;

     while(i<n)  //贪心

     {

       while(dragon[i]>knight[j])

              j++;

       if(j>=m)

       {flag=false; break;}

       coin+=knight[j++];

       i++;

     }

      

        if(flag)

            printf("%d\n",coin);

        else

            printf("Loowater is doomed!\n");

      

    }

    return 0;

}
