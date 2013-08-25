#include<stdio.h>
#define MAXN 100+10
int a[MAXN];
int main()
{
    int i,n=0,x;
    while(scanf("%d",&x)!=EOF)
    {
    a[n++]=x;
    }
    for(i=n-1;i>=1;i--)
    printf("%d",a[i]);
    printf("%d\n",a[0]);
    return 0;
}
