#include<cstdio>
#include<cstring>
using namespace std;
//#define MAXN 100+10
int arr[100];
int main()
{
    memset(arr ,1,sizeof(arr));
    int no=0,b=0;
    for(int i=1;i<=100;i++)
    {
        no=no+b+1;
        b++;
        arr[no]=0;
    }
    for(int i=1;i<=100;i++)
    {
        if(arr[i]==1)
            printf("%d\n",arr[i]);
    }
    return 0;
}



    

