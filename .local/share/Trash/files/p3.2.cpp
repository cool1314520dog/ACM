#include<cstdio>
#include<cstring>
#include<algorithm>
#include<cstdlib>
using namespace std;
char str1[1005],str2[1005];
int main()
{
    while(gets(str1)!=NULL&&gets(str2)!=NULL)
    {
        int len1,len2;
        len1=strlen(str1);
        len2=strlen(str2);
        sort(str1,str1+len1);
        sort(str2,str2+len2);
        int k=0;
        for(int i=0;i<len1;i++)
        {
            for(int j=k;j<len2;j++)
                if(str1[i]==str2[j])
                {
                    printf("%c",str1[i]);
                    str2[j]='*';
                    k=j;
                    break;
                }
        }
        printf("\n");
    }
    return 0;
}
