#include<cstdio>
#include<cstring>
using namespace std;
int arr[10005];
int main()
{
    int n,m;
    int tmp;
    while(scanf("%d%d",&n,&m)&&n&&m)
    {
        int max=0;
        memset(arr, 0, sizeof(arr));
        for(int i=0;i<n;i++)
        {
            scanf("%d",&tmp);
            arr[tmp]++;
            max=max<tmp?tmp:max;
        }
        tmp=0;
        for(int i=0;i<=max;i++)
        {
            if(arr[i])
            {
                tmp+=arr[i];
                arr[i]=tmp-arr[i]+1;
            }
        }
        int count=1;
        printf("CASE# %d\n",count++);
        for(int i=0;i<m;i++)
        {
            scanf("%d",&tmp);
        if(arr[tmp])
        {
            printf("%d found at %d\n",tmp,arr[tmp]);
        }
        else
        {
            printf("%d not found\n",tmp);
        }
        }
    }
    return 0;
}


