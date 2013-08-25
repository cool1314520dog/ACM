#include<cstdio>
#include<cstring>
using namespace std;
int main()
{
    int i,j,len;
    char str[100],ch;
    while(gets(str))
    {
        if(str[0]=='#')
            break;
        len=strlen(str);
        if(len==1)
        {
            printf("No Successor");
            continue;
        }
        i=len-2;
        while(i!=-1&&str[i]>=str[i+1])
            i--;
        if(i==-1)
        {
            printf("No Successor\n");
            continue;
        }
        j=len-1;
        while(str[j]<=str[i])
            j--;
        ch=str[i];
        str[i]=str[j];
        str[j]=ch;
        for(j=0;j<=i;j++)
            printf("%c",str[j]);
        for(j=len-1;j>i;j--)
            printf("%c",str[j]);
        printf("\n");
    }
    return 0;
}



