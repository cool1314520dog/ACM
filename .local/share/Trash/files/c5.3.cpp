#include<cstdio>
#include<cstring>
#include<cstdlib>
using namespace std;
char str[2005][100];
int cmp(const void *a, const void *b)
{
    return strcmp((char *)a,(char *)b);
}
int main()
{
    int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%s",str[i]);
        gets(str[i+1]);
    }
    qsort(str,n,sizeof(str[0]),cmp);
    int tmp=1;
    for(int i=1;i<=n;i++)
    {
        if(strcmp(str[i],str[i-1])==0&&i<n)
        {
            tmp++;
        }
        else
        {
            printf("%s %d\n",str[i-1],tmp);
            tmp=1;
        }
    }
    return 0;
}
