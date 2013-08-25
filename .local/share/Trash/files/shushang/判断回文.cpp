#include<cstdio>
#include<cstring>
using namespace std;
char str[20];
int main()
{
    int ok=1;
    gets(str);
    int len=strlen(str);
    for(int i=0;i<len/2;i++)
    {
        if(str[i]!=str[len-1-i])
        {
            ok=0;
            break;
        }
    }
    if(ok==0)
        printf("no\n");
    else
        printf("yes\n");
    return 0;
}
    
