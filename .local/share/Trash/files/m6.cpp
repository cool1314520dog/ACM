#include<stdio.h>
int main()
{
    int a[20];
   // int ans=0;
    int n;
    int tmp;
    while(scanf("%d",&n)!=EOF)
    {
        int ans=0;
        for(int i=0;i<n;i++)
            scanf("%d",&a[i]);
        for(int i=0;i<n;i++)
        {
            tmp=1;
            for(int j=i;j<n;j++)
            {
                tmp*=a[j];
                if(tmp>ans)
                    ans=tmp;
            }
        }
        if(ans>0)
            printf("%d\n",ans);
        else
            printf("-1");
    }
    return 0;
}
