#include<cstdio>
using namespace std;
int main()
{
    char ch;
    double x,y,sum;
    scanf("%lf %lf",&x,&y);
    getchar();
    ch=getchar();
    switch(ch)
    {
        case '+':
            sum=x+y;
            break;
        case '-':
            sum=x-y;
            break;
        case '*':
            sum=x*y;
            break;
        case '/':
            sum=x/y;
            break;
        default:
            printf("error");
            break;
    }
    printf("%.2f\n",sum);
    return 0;
}

