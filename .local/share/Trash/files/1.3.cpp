#include<cstdio>
using namespace std;
char map[10][10];
int col[10]={0};
int ans,n,m;
void dfs(int a,int b)
{
    if(b<0)
        return;
    if(a==n)
    {
        if(b==0)
            ans++;
        return ;
    }
    for(int i=0;i<n;i++)
    {
        if(!col[i]&&map[a][i]=='#')
        {
            col[i]=1;
            dfs(a+1,b-1);
            col[i]=0;
        }
    }
    dfs(a+1,b);
}
int main()
{
    int i;
    while(scanf("%d %d",&n,&m),n!=-1||m!=-1)
    {
        for(i=0;i<n;i++)
            scanf("%s",map[i]);
        ans=0;
        dfs(0,m);
        printf("%d\n",ans);
    }
    return 0;
}
