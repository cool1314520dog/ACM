#include<iostream>
#include<cstdio>
#include<cstring>
using namespace std;
char a[260],b[260];
int result[550];
void reverse (char a[])
{
    int len=strlen(a);
    for(int i=0;i<len/2;i++)
    {
        char temp=a[i];
        a[i]=a[len-1-i];
        a[len-1-i]=temp;
    }
}
void multiply(char a[],char b[])
{
    int i,j;
    int alen=strlen(a);
    int blen=strlen(b);
    memset(result,0,sizeof(result));
    reverse(a);
    reverse(b);
    int len=0;
    int up;
    for(i=0;i<alen;i++)
    {
        up=0;
        for(j=0;j<blen;j++)
        {
            int temp=result[i+j]+(a[i]-'0')*(b[j]-'0')+up;
            up=temp/10;
            result[i+j]=temp%10;
        }
        if(up>0)
            result[i+j]=up;
    }
    if(up>0)
        len=alen+blen;
    else
        len=alen+blen-1;
    if(strcmp(a,"0")==0||strcmp(b,"0")==0)
        len=1;
    for(int t=len-1;t>=0;--t)
        cout<<result[t];
    cout<<endl;
}
int main()
{
    while(scanf("%s%s",a,b)!=EOF)
    {
        memset(result,0,sizeof(result));
        multiply(a,b);
    }
    return 0;
}

