#include<cstdio>
#include<cstring>
#include<cstdlib>
#include<algorithm>
using namespace std;
#define MAXN 20
#define N 1000
struct pupets
{
    char str[MAXN];
    int level;
};
pupets pupet[N];
int n;
int findlevel(char *p)
{
    for(int i=0;i<n;i++)
    {
        if(strcmp(pupet[i].str,p)==0)
            return pupet[i].level;
    }
}
int cmp(const pupets &a,const pupets &b)
{
    int mark;
    if(a.level!=b.level)
        return a.level<b.level;
    else
    {
        mark=strcmp(a.str,b.str);
        if(mark<0)
            return 1;
        else
            return 0;
    }
}
int main()
{
    char controled[MAXN];
    char controler[MAXN];
    while(scanf("%d",&n)==1)
    {
        getchar();
        memset(pupet,0,sizeof(pupet));
        strcpy(pupet[0].str,"Alice");
        pupet[0].level=0;
        for(int i=1;i<=n;i++)
        {
            scanf("%s %s",controled,controler);
            pupet[i].level=findlevel(controler)+1;
            strcpy(pupet[i].str,controled);
        }
        sort(pupet+1,pupet+n+1,cmp);
        for(int i=1;i<=n;i++)
            printf("%s %d\n",pupet[i].str,pupet[i].level);
    }
    return 0;
}

