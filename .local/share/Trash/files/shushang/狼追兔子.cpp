#include<cstdio>
using namespace std;
#define MAXN 10000
int main()
{
    int mark[11];
    int k=1,num=1;
    for(int i=0;i<=10;i++)
    {
        mark[i]=1;
    }
    for(int i=1;i<=MAXN;i++)
    {
        if(num<=10)
        {
            mark[num]=0;
        }
        else
        {
            mark[num%10]=0;
        }
        num=num+1+k;
        k++;
    }
    for(int i=1;i<=10;i++)
    {
        if(mark[i]==1)
        {
            printf("可能在%d洞里\n",i);
        }
    }
    return 0;
}

    

