#include<cstdio>
using namespace std;
int main()
{
    long long a[20],ans,temp;
    int n;
    while(scanf("%d",&n)!=EOF)
    {
        ans=0;
        for(int i=0;i<n;i++)
            scanf("%lld",&a[i]);
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
