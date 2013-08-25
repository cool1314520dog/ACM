#include<cstdio>
#include<algorithm>
#include<cstring>
#define MAXN 100
using namespace std;
int main()
{
    int n;
    int len;
    char str[MAXN];
    scanf("%d",&n);
    while(n--)
    {
         gets(str);
         len=strlen(str);
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
