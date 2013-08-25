#include<cstdio>
#include<algorithm>
using namespace std;
#define MAXN 2000000
int A[MAXN];
int P[MAXN];
int sum;
void print_p(int n,int *A,int *P,int cur)
{
    int i,j;
    if(cur==n)
    {
        for(i=0;i<n;i++)
            printf("%d",A[i]);
        sum++;
        printf("\n");
    }
    else
    {
        for(i=0;i<n;i++)
        {
            if(!i||P[i]!=P[i-1])
            {
                int c1=0,c2=0;
                for(j=0;j<cur;j++)
                    if(A[j]==P[i])
                        c1++;
                for(j=0;j<n;j++)
                    if(P[i]==P[j])
                        c2++;
                if(c1<c2)
                {
                    A[cur]=P[i];
                    print_p(n,A,P,cur+1);
                }
            }
        }
    }
}
int main()
{
    int n,i;
    while(~scanf("%d",&n))
    {
        sum=0;
        for(i=0;i<n;i++)
            scanf("%d",&P[i]);
        sort(P,P+n);
        print_p(n,A,P,0);
        printf("sum=%d\n",sum);
    }
    return 0;
}
