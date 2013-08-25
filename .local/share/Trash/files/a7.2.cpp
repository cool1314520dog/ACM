#include<cstdio>
using namespace std;
int main()
{
    int a,n,s_a,i=1;
    double sum=0;
    scanf("%d%d",&a,&n);
    s_a=a;
    printf("sum=");
    while(i<=n)
    {
        printf("%d",s_a);
        if(i!=n)
            printf("+");
        sum+=s_a;
        s_a=s_a*10+a;
        i++;
    }
    printf("=%.0f\n",sum);
    return 0;
}
