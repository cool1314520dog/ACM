#include<cstdio>
#include<cmath>
using namespace std;
int main()
{
    double n,p;
    int a;
    while(scanf("%lf%lf",&n,&p)!=EOF)
    {
        a=((int)pow(p,1.0/n)+0.5);
        printf("%d\n",a);
    }
    return 0;
}
