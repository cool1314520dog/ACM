#include<cstdio>
#include<cmath>
using namespace std;
double jisuan(double x)
{
    return 8*x*x*x*x+7*x*x*x+2*x*x+3*x+6;
}
int main()
{
    int t;
    double Y;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%lf",&Y);
        double mid;
        double a=0,b=100;
        if(jisuan(0)<=Y&&Y<=jisuan(100))
        {
            while(b-a>1e-10)
            {
                mid=(a+b)/2;
                if(jisuan(mid)<Y)
                    a=mid+1e-10;
                else
                    b=mid-1e-10;
            }
            printf("%.4lf\n",(a+b)/2.0);
        }
        else
            printf("No solution!\n");
    }
        return 0;
}



