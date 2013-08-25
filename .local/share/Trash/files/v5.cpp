#include<cstdio>
#include<cstring>
int arr[10005];
using namespace std;
int main()
{
    int n,m;
    int count=1;
    while(scanf("%d%d",&n, &m)&&n&&m)
    {
        memset(arr,0,sizeof(arr));
        int max=0,tmp;
        for(int i=0;i<n;i++)
        {
            scanf("%d",&tmp);
            arr[tmp]++;
            max=max<tmp?tmp:max;//统计出现的最大的数字
        }
        tmp=0;
        for(int i=0;i<=max;i++)
        {
            if(arr[i])
            {
                tmp+=arr[i];//统计之前所有数字出现的次数之和
                arr[i]=tmp-arr[i]+1;计算i数字出现在第几个
            }
        }
        printf("CASE# %d:\n",count++);
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
