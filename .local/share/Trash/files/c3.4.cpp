#include<cstdio>
#include<cstdlib>
#include<cstring>
using namespace std;
int cmp(const void *a,const void *b)
{
    char *_a=(char *)a;
    char *_b=(char *)b;
    return strcmp(_a,_b);
}
int main()
{
    char str[2005][80];
    int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%s",str[i]);
       // printf("%shehe\n",str[i]);
        gets(str[i+1]);
       // printf("%swawa\n",str[i+1]);
    }
    qsort(str,n,sizeof(str[0]),cmp);
    for(int i=0;i<6;i++)
    {
        printf("%swuwu\n",str[i]);
    }
    int tmp=1;
    for(int i=1;i<=n;i++)
    {
        if(strcmp(str[i],str[i-1])==0&&i<n)
        {
            printf("%shaha\tlolo%s\n",str[i],str[i-1]);
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
