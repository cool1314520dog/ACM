#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int cmp(const void *a,const void *b)
{
    return (*(char*)a-*(char*)b);
}
int main()
{
    char str1[1000],str2[1000];
    while(gets(str1))
    {
        gets(str2);
        int len1,len2;
        len1=strlen(str1);
        len2=strlen(str2);
        qsort(str1,len1,sizeof(str1[0]),cmp);
        qsort(str2,len2,sizeof(str2[0]),cmp);
        int i,j,k;
        k=0;
        for(i=0;i<len1;i++)
        {
            for(j=k;j<len2;j++)
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
