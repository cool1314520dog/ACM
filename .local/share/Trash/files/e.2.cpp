#include<cstdio>
using namespace std;
int main()
{
    int i,j,f,n,A,B,a[1010],b[1010],c[1010],sum=0,num;
    while(scanf("%d",&n),n)
    {
        printf("Game %d:\n",++sum);
        for(i=1;i<=n;i++)
            scanf("%d",&a[i]);
        while(1)
        {
            num=0;
            for(i=1;i<=n;i++)
            {
                scanf("%d",&b[i]);
                c[i]=a[i];
                if(b[i]==0)
                    ++num;
            }
            if(num==n)
                break;
            A=0;B=0;
            for(i=1;i<=n;i++)
                if(c[i]==b[i])
                {
                    ++A;
                    c[i]=-1;
                    b[i]=-1;
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

