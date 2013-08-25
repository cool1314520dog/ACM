#include<cstdio>
#include<cstring>
using namespace std;
int num[]={0,0,64,32,16,8,0,4,2,1,0};
int main()
{
    char str[15];
    int ans,i;
    gets(str);
    while(gets(str)&&str[0]!='_')
    {
        ans=0;
        int len=strlen(str);
        for(i=2;i<len;i++)
        {
            if(str[i]=='o')
            {
                ans+=num[i];
            }
        }
        printf("%c",ans);
    }
    return 0;
}

