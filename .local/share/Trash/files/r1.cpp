#include<cstdio>
#include<cstring>
using namespace std;
const int MAXN = 20;
int s[1<<MAXN];
int main()
{
    int D,I;
    while(scanf("%d%d",&D,&I)==2)
    {
        memset(s,0,sizeof(s));
        int k,n=(1<<D)-1;
        for(int i=0;i<I;i++)
        {
            k=1;
            while(1)
            {
                s[k]=!s[k];
                k=s[k]?k*2:k*2+1;
                if(k>n)
                    break;
            }
        }
        printf("%d\n",k/2);
    }
    return 0;
}


