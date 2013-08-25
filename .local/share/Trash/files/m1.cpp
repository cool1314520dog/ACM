#include<cstdio>
using namespace std;
int isright(int x,int y)
{
    int a[10]={0};
    for(int i=0;i<=5;i++)
    {
        a[x%10]++;
        x=x/10;
    }
    for(int i=0;i<=5;i++)
    {
        a[y%10]++;
        x=x/10;
    }
    for(int i=0;i<10;i++)
    {
        if(a[i]!=1)
            return 0;
    }
    return 1;
}

int main()
{
    int n,i;
    scanf("%d",&n);
    for(int i=1234;i*n<=98765;i++)
    {
        if(i<=9876&&i*n>=12345&&isright(i,i*n))
            printf("%d/0%d\n",i*n,i);
        if(i>=10234&&i*n>=56789&&isright(i,i*n))
            printf("5d/%d",i*n,i);
    }
    return 0;
}
