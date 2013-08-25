#include<stdio.h>
int n,step,a[101][101],visit[101];
int sort()
{
    int i,x=0,y,f=1;
    if(step<=0)
        return 0;
    --step;
    while(f)
    {
        ++x;
        y=0;
        if(visit[x])
        {
            for(i=1;i<=n;i++)
            {
                y=y+a[i][x];
                if(y>0)
                    break;
            }
            f=y;
        }
    }
        for(i=1;i<=n;i++)
            a[x][i]=0;
        visit[x]=0;
        printf("%d",x);
        if(step)
            printf(" ");
        else
            printf("\n");
        sort();
        return 0;
    }
    int main()
    {
        int x,y,i,j,m;
        while(scanf("%d%d",&n,&m),n+m)
        {for(i=1;i<=n;i++)
            for(j=1;j<=n;j++)
                a[i][j]=0;
            for(i=1;i<=n;i++)
                visit[i]=1;
          for(i=1;i<=m;i++)
          {
              scanf("%d%d",&x,&y);
              a[x][y]=1;
          }
          step=n;
          sort();
        }
        return 0;
    }
