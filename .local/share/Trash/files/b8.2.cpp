#include<cstdio>
#include<cstring>
#include<cctype>
using namespace std;
#define maxn 5000
#define maxn2 200
char str[maxn][maxn2];
int main()
{
    char temp[maxn2];
    char ch;
    int n=0;
    while((ch=getchar())!=EOF)
    {
        if(isalpha(ch))
            ch=tolower(ch);
        else
            continue;
        memset(temp,0,sizeof(temp));
        for(int i=0;1;i++)
        {
            temp[i]=ch;
            if(!isalpha(ch=tolower(getchar())))
            {
                for(int j=0;j<n+1;j++)
                {
                    if(strcmp(temp,str[j])==0)
                        break;
                    else if(j==n)
                    {
                        strcpy(str[n],temp);
                        n++;
                        break;
                    }
                }
                break;
            }
        }
    }
    for(int i=0;i<n-1;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(strcmp(str[i],str[j])<0)
            {
                strcpy(temp,str[i]);
                strcpy(str[i],str[j]);
                strcpy(str[j],temp);
            }
        }
    }
    while(n--)
    {
        if(str[n]==str[n-1])
            break;
        else
            printf("%s\n",str[n]);
    }
    return 0;
}



