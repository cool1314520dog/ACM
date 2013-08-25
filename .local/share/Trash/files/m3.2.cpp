#include<cstdio>
int flag[10];
#define MAXN 10000
int main()
{
    int k=1,num=1;
    for(int i=0;i<10;i++)
    {
        flag[i]=1;
    }
    for(int i=0;i<MAXN;i++)
    {
        if(num<=10)
            flag[num]=0;
        else
            flag[num%10]=0;
        num=num+1+k;
        k++;
    }
    for(int i=0;i<10;i++)
    {
        if(flag[i]==1)
            printf("可能在%d洞里\n",i);
    }
    return 0;
}

