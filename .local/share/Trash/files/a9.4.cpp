#include<stdio.h>
#include<math.h>
int main()
{
    double x, y;
    int k;
    while(scanf("%lf%lf", &x, &y) != EOF)
    {
        k = (int)(pow(y, 1.0/x) + 0.5);
        printf("%d\n", k); 
    }
    return 0;
}
