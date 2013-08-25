#include<cstdio>
#include<cmath>
using namespace std;
int main()
{
    double x, y;
    int a;
    while(scanf("%lf%lf", &x, &y) != EOF)
    {
        a=(int)(pow(y,1.0/x) + 0.5);
        printf("%d\n",a); 
    }
    return 0;
}
