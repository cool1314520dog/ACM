#include<cstdio>
using namespace std;
#define MAXN 10000;
int main()
{
    int no=1,a=1;
    int flag[11];
    for(int i=1;i<=10;i++)
        flag[i]=1;
    for(int i=1;i<=MAXN;i++)
    {
        if(no<=10)
            flag[no]=0;
        else
            flag[no%10]=0;
        no=no+a+1;
        a++;
    }
    for(int i=1;i<=10;i++)
        if(flag[i]==1)
            printf("可能在%d洞里\n",i);
    return 0;
}
