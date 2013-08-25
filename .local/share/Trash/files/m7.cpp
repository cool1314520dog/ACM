#include<cstdio>
using namespace std;
int a[20];
int main()
{
    long long ans=0,temp;
    int n;
    while(scanf("%d",&n)!=EOF)
    {
        for(int i=0;i<n;i++)
            scanf("%d",&a[i]);
        for(int i=0;i<n;i++)
        {
            temp=1;
            for(int j=i;j<n;j++)
            {
                temp*=a[j];
                if(temp>ans)
                    ans=temp;
            }
        }
        if(ans>0)
            printf("%lld\n",ans);
        else
            printf("-1\n");
    }
    return 0;
}
