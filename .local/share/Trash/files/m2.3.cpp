#include<cstdio>
#include<cstring>
using namespace std;
int map[10][10];
int vis[20][20];
int max;
void dfs(int cur,int num)
{
    if(cur==8)
    {
        if(max<num)
            max=num;
        return ;
    }
    for(int i=0;i<8;i++)
    {
        if(!vis[0][i]&&!vis[1][cur+i]&&!vis[2][cur-i+8])
        {
            vis[0][i]=vis[1][cur+i]=vis[2][cur-i+8]=1;
            dfs(cur+1,num+map[cur][i]);
            vis[0][i]=vis[1][cur+i]=vis[2][cur-i+8]=0;
        }
    }
}
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        max=0;
        memset(vis,0,sizeof(vis));
        for(int i=0;i<8;i++)
            for(int j=0;j<8;j++)
                scanf("%d",&map[i][j]);
        dfs(0,0);
        printf("%5d\n",max);
    }
    return 0;
}

