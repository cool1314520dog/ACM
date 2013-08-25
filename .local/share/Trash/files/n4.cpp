#include<cstdio>
using namespace std;
int main()
{
   int t;
   scanf("%d",&t);
   double x=0.0;
   double Y;
   double a;
   while(t--)
   {
       scanf("%lf",&Y);
       if(8*x*x*x*x+7*x*x*x+2*x*x+3*x+6==Y)
       {
           printf("%lfhehe\n",x);
           a=x;
       }
       if(0<a&&a<100)
           printf("%.4lf\n",a);
       else
           printf("No solution!");
   }
   return 0;
}

