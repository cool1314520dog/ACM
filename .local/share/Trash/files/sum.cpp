#include<iostream>
#include<cmath>
using namespace std;
double y;
double f(double n)
{
    return 8*pow(n,4)+7*pow(n,3)+2*pow(n,2)+3*n+6;
}
double find()
{
    double mid;
    double a,b;
    a=0;b=100;
    while(b-a>1e-6)
    {
        mid=(a+b)/2;
        if(f(mid)<y)
        a=mid+1e-7;
        else
        b=mid-1e-7;
    }
    return (a+b)/2.0;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        cin>>y;
        if(f(0)<=y&&y<=f(100))
        printf("%.4lf\n",find());
        else
        cout<<"No solution!\n";
    }
    return 0;
}
