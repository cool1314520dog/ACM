#include<cstdio>
#include<cmath>
using namespace std;
double r[10],R[10],max,k,x[10];
int n,visit[10];
int dfs(int m)
{
    int i,j;
    double pos,left,right;
    if(m>n)
    {
        x[1]=R[1];
        for(i=2;i<=n;i++)
        {
            x[i]=0;
            for(j=1;j<i;j++)
            {
                pos=2*sqrt(R[i]*R[j])+x[j];
                if(pos>x[i])
                    x[i]=pos;
            }
        }
        left=99999999;
        right=-99999999;
        for(i=1;i<=n;i++)
        {
            if(x[i]-R[i]<left)
                left=x[i]-R[i];
            if(x[i]+R[i]>right)
                right=x[i]+R[i];
        }
        if(right-left<max)
            max=right-left;
        return 0;
    }
    for(i=1;i<=n;i++)
        if(visit[i])
        {
            visit[i]=0;
            R[m]=r[i];
            dfs(m+1);
            visit[i]=1;
        }
};
int main()
{
    int i,t;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d",&n);
        for(i=1;i<=n;i++)
        {
            visit[i]=1;
            scanf("%lf",&r[i]);
        }
        max=99999999;
        dfs(1);
        printf("%.3lf\n",max);
    }
    return 0;
}



