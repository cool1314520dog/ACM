#include<cstdio>
#include<cstring>
#define MAXN 10000
int main()
{
    int b=1,num=1,a[11];
 //   memset(a,1,sizeof(a));

    for(int i=1;i<=10;i++)
    {
        a[i]=1;
    }
    for(int i=1;i<=MAXN;i++)
    {
         if(num<=10)
         {
             a[num]=0;
         }
         else
         {
             a[num%10]=0;
         }
         num=num+1+b;
         b++;
    }
    for(int i=1;i<=10;i++)
    {
        if(a[i]==1)
            printf("可能在%d\n",i);
    }
    return 0;
}

