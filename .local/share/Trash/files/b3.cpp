#include<stdio.h>
int main()
{
    int n,i,j,s=0;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        int fac=1;
        for(j=1;j<=i;j++)
            fac*=j;
        s+=fac;
    }
    printf("%d\n",s%1000000);
    return 0;
}
