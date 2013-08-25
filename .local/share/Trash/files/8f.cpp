#include<cstdio>
#include<cmath>
using namespace std;
int main()
{
    double hour ,min,sum;
    while(scanf("%lf:%lf",&hour,&min)==2)
    {
        if(hour==0&&min==0)
            break;
        hour=hour*30.0+min/60.0*30.0;
        min=min*6.0;
        sum=fabs(hour-min);
        if(sum>180)
            sum=360-sum;
        printf("%0.3lf\n",sum);
    }
    return 0;
}
