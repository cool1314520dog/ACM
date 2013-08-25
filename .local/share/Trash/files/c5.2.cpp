#include<cstdio>
#include<cstring>
#include<algorithm>
using namespace std;
#define MAXN 100
char str[MAXN];
int main()
{
    while(gets(str))
    {
        if(str[0]=='#')
            break;
        int ok=0;
        int len=strlen(str);
        if(next_permutation(str,str+len))
        {
            ok=1;
            puts(str);
        }
        if(!ok)
            printf("No Successor\n");
    }
    return 0;
}
