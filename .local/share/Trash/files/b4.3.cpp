#include<cstdio>
#include<cstring>
#include<algorithm>
#define MAXN 100
char str[MAXN];
using namespace std;
int main()
{
    int n;
    scanf("%d",&n);
    getchar();
    while(n--)
    {
        gets(str);
        int len=strlen(str);
        sort(str,str+len);
        puts(str);
        while(next_permutation(str,str+len))
        {
            puts(str);
        }
        printf("\n");
    }
    return 0;
}
