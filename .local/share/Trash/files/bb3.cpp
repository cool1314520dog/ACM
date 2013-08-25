#include<cstdio>
#include<cstring>
using namespace std;
int arr[100];
int main()
{
    int n,m;
    int ans;
    scanf("%d",&n);
    while(n--)
    {
        memset(arr, 0, sizeof(arr));
        scanf("%d",&m);
        for(int i=0; i<m; i++)
            scanf("%d",&arr[i]);
        ans=0;
        for(int i=m-1; i>=0; i--)
            for(int j=0; j<i; j++)
                if(arr[j]>arr[j+1])
                {
                    int tmp;
                    tmp=arr[j];
                    arr[j]=arr[j+1];
                    arr[j+1]=tmp;
                    ans++;
                }
        printf("Optimal train swapping takes %d swaps.\n",ans);
    }
    return 0;
}


