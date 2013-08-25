#include<cstdio>
#include<cstring>
using namespace std;
#define n 110
int main()
{
    int i,j,t,lena,lenb;
    char a[n],b[n],s[n],s1[n],s2[n],s3[n],s4[n],s5[n];
    while(scanf("%d\n",&t)!=EOF)
    {
        while(t--)
        {
            gets(a);
            gets(b);
            lena=strlen(a);
            for(j=0,i=0;a[i]!='<';i++,j++)
            {
                s1[j]=a[i];
            }
            s1[j]='\0';
            for(i=i+1,j=0;a[i]!='>';i++,j++)
            {
                s2[j]=a[i];
            }
            s2[j]='\0';
            for(i=i+1,j=0;a[i]!='<';i++,j++)
            {
                s3[j]=a[i];
            }
            s3[j]='\0';
            for(i=i+1,j=0;a[i]!='>';i++,j++)
            {
                s4[j]=a[i];
            }
        
        s4[j]='\0';
        for(i=i+1,j=0;i<lena;i++,j++)
        {
            s5[j]=a[i];
        }
        s5[j]='\0';
        for(i=0,j=0;b[i]!='.';i++,j++)
        {
            s[j]=b[i];
        }
        s[j]='\0';
        printf("%s%s%s%s%s\n",s1,s2,s3,s4,s5);
        printf("%s%s%s%s%s\n",s,s4,s3,s2,s5);
        }
    }
return 0;
}
