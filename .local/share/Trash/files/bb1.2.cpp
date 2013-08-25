#include<cstdio>
#include<cstdlib>
#define max_int 2147483647
char num1[300],num2[300];
int main()
{
    char c;
    while(scanf("%s %c %s",num1,&c,num2)==3)
    {
        printf("%s %c %s\n",num1,c,num2);
        double a,b;
        a=atof(num1);
        b=atof(num2);
        if(a>max_int)
            printf("first number too big\n");
        if(b>max_int)
            printf("second number too big\n");
        if(c=='+'&&a+b>max_int)
            printf("result too big\n");
        if(c=='*'&&a*b>max_int)
            printf("result too big\n");
    }
    return 0;
}
