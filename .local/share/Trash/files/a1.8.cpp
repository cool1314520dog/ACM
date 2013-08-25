#include<stdio.h>
#include<string.h>
int main()
{
    int i,n,j;
    char str[100],ipos;
    while(gets(str)&&(str[0]!='#'))
    {
        n=strlen(str);
        if(n==1)
        {
            printf("No Successor\n");
            continue;
        }
        i=n-2;
        while(i!=-1&&str[i]>=str[i+1])
            i--;
        if(i==-1)
        {
            printf("No Successor\n");
            continue;
        }
        j=n-1;
        while(str[j]<=str[i])j--;
        ipos=str[i];str[i]=str[j];str[j]=ipos;
        for(j=0;j<=i;j++)
            printf("%c",str[j]);
        for(j=n-1;j>i;j--)
            printf("%c",str[j]);
        printf("\n");
    }
    return 0;
}

