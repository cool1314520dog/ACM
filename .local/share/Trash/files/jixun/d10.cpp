#include<cstdio>
#include<cstring>
#include<algorithm>
using namespace std;
int d[20005],k[20005];
int main()
{
    int n,m,i,j,sum=0;
    int flag=1;
    while(scanf("%d%d",&n,&m))
    {
        if(n==0&&m==0)
            break;
        for(i=0;i<n;i++)
            scanf("%d",&d[i]);
        for(i=0;i<n;i++)
            scanf("%d",&k[i]);
        if(m<n)
        {
            printf("Loowater is doomed");
            continue;
        }
        sort(d,d+n);
        sort(k,k+m);
        i=j=0;
        while(i<n)
        {
            while(d[i]>k[j])
               j++;
            if(j>=m)
            {
                flag=0;
                break;
            }
            sum+=k[j];
            j++;
            i++;
        }
        if(flag)
            printf("%d\n",sum);
        else
            printf("Loowater is doomed\n");
    }
    return 0;
}

