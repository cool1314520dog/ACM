#include<cstdio>
#include<cstring>
using namespace std;
int main()
{
    int a[100];
    int i,j,k,ans,N,L;
    scanf("%d",&N);
    for(i=0; i<N; i++)
    {
        memset(a,0,sizeof(a));
        scanf("%d",&L);
        for(j=0; j<L; j++)
            scanf("%d",&a[j]);
        ans=0;
        for(j=L-1; j>=0; j--)
            for(k=0; k<j; k++)
                if(a[k]>a[k+1])
                {
                    int t;
                    t=a[k];
                    a[k]=a[k+1];
                    a[k+1]=t;
                    ans++;
                }
        printf("Optimal train swapping takes %d swaps.\n",ans);
    }
    return 0;
}

