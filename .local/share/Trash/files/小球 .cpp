#include<cstdio>
using namespace std;
#define MAXN 1000000
int A[MAXN];
void print_p(int n,int *A,int cur)
{
    int i,j;
    if(cur==n)
    {
        for(i=0;i<n;i++)
            printf("%d",A[i]);
        printf("\n");
    }
    else
    {
        for(i=1;i<=n;i++)
        {
            int ok=1;
            for(j=0;j<cur;j++)
                if(A[j]==i)
                    ok=0;
            if(ok)
            {
                A[cur]=i;
                print_p(n,A,cur+1);
            }
        }
    }
}
int main()
{
    int n;
    while(~scanf("%d",&n))
    {
        print_p(n,A,0);
        printf("\n");
    }
    return 0;
}
