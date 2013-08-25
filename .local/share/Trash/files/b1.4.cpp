#include<cstdio>
using namespace std;
#define maxn 1000+10
int a[maxn],b[maxn],c[maxn];
int main()
{
    int A,B,n;
    int i,j;
    int ans=1,tot;
    while(scanf("%d",&n),n)
    {
        printf("Game %d:\n",ans++);
        for(i=1;i<=n;i++)
            scanf("%d",&a[i]);
        while(1)
        {
            tot=0;
            for(i=1;i<=n;i++)
            {
                scanf("%d",&b[i]);
                c[i]=a[i];
                if(b[i]==0)
                    ++tot;
            }
            if(tot==n)
                break;
            A=0;
            B=0;
            for(i=1;i<=n;i++)
            {
                if(c[i]==b[i])
                {
                    ++A;
                    c[i]=-1;
                    b[i]=-1;
                }
            }
            for(i=1;i<=n;i++)
            {
                if(c[i]!=-1)
                {
                    for(j=1;j<=n;j++)
                        if(c[i]==b[j])
                        {
                            ++B;
                            c[i]=-1;
                            b[j]=-1;
                            break;
                        }
                }
            }
            printf("    (%d,%d)\n",A,B);
        }
    }
    return 0;
}


    
