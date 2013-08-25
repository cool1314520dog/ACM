#include<cstdio>
using namespace std;
#define maxn 1000+10
int a[maxn],b[maxn],c[maxn];
int main()
{
    int n,tot;
    int A,B;
    int ans=1;
    while(scanf("%d",&n),n);
    {
        printf("Game %d:\n",ans++);
        for(int i=0;i<n;i++)
            scanf("%d",&a[i]);
    }
    while(1)
    {
        tot=0;
        for(int i=0;i<n;i++)
        {
            scanf("%d",&b[i]);
            c[i]=a[i];
            if(b[i]==0)
                ++tot;
        }
        if(tot==n-1)
            break;
          A=0;
          B=0;
          for(int i=0;i<n;i++)
          {
            if(c[i]==b[i])
            {
                ++A;
                c[i]='*';
                b[i]='*';
            }
          }
        for(int i=0;i<n;i++)
        {
            if(c[i]!='*')
            {
                for(int j=0;j<n;j++)
                {
                    if(c[i]==b[j])
                    {
                        ++B;
                        c[i]='*';
                        b[j]='*';
                        break;
                    }
                }
            }
        }
        printf("     (%d,%d)",A,B);
    }
    return 0;
}




