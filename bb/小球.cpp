/*经典移动小球*/
#include <iostream>
#include<algorithm>
#include<queue>
#include<stack>
#include<cmath>
#include<string.h>
#include<stdio.h>
#include<stdlib.h>
using namespace std;
#define maxn 26000
int left1[maxn],right1[maxn];
void link(int x,int y)
{
    right1[x]=y;
    left1[y]=x;
}
int main()
{
    int i,n,casen,x,y,k;
    char type[2];
    while(~scanf("%d%d",&n,&casen))
    {
        for(i=0; i<=n; i++)
            link(i,i+1);
        //想象最左边(left1[1]=0)还有一个0,
        //最右边(right1[n]=0)还有一个0,没有影响
        for(i=1; i<=casen; i++)
        {
            scanf("%s%d%d",type,&x,&y);
            link(left1[x],right1[x]);
            if(type[0]=='A')
            {
                link(left1[y],x);
                link(x,y);
            }
            else
            {
                link(x,right1[y]);
                link(y,x);
            }
        }
        k=0;
        for(i=0; i<n-1; i++)
        {
            k=right1[k];
            printf("%d ",k);
        }
        printf("%d",right1[k]);
        printf("\n");
    }
    return 0;
}
