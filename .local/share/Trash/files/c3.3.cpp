#include<cstdio>
#include<cstring>
#include<algorithm>
using namespace std;
#define MAXN 20
char str[20];
int main()
{
    int n;
    scanf("%d",&n);
    while(n--)
    {
        int a,b;
        scanf("%d %d",&a,&b);
        memset(str,0,sizeof(str));
        for(int i=0;i<a-b;i++)
            str[i]='0';
        for(int i=a-b;i<a;i++)
            str[i]='1';
        puts(str);
        while(next_permutation(str,str+a))
        {
            puts(str);
        }
        if(n)
        printf("\n");
    }
    return 0;
}


