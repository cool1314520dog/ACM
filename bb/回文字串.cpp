/*最长回文子串*/
#include<iostream>
#include<string.h>
#include<ctype.h>
using namespace std;
#define Max 5000 +10
char buf[Max],s[Max];
int p[Max];
int main()
{
    int n,m=0,max=0;
    int i,j;
    //int k;
    int x,y;
    fgets(buf,sizeof(s),stdin);
    n=strlen(buf);
    for(i=0;i<n;i++)
        if(isalpha(buf[i]))
        {
            p[m]=i;
            s[m++]=toupper(buf[i]);
        }
        for(i=0;i<m;i++)
        {
            /*for(j=i;j<m;j++)
            {
                int ok=1;
                for(k=i;k<=(i+j)/2;k++)
                    if(s[k]!=s[i+j-k])ok=0;
                if(ok&&j-i+1>max)
                    max=j-i+1;
            }枚举法*/
            for(j=0;i-j>0&&i+j<m;j++)
            {
                if(s[i-j]!=s[i+j])
                    break;
                if(2*j+1>max)
                {
                    max=j*2+1;x=p[i-j];y=p[i+j];
                }
            }//奇数
            for(j=0;i-j>0&&i+j+1<m;j++)
            {
                if(s[i-j]!=s[i+j+1])
                    break;
                if(2*j+2>max)
                {
                    max=j*2+2;x=p[i-j];y=p[i+j+1];
                }
            }//偶数
            //中间到两边法
        }
            printf("max= %d\n",max);
            for(i=x;i<=y;i++)
                printf("%c",buf[i]);
            printf("\n");
             return 0;
}
