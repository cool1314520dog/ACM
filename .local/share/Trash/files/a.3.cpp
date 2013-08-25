#include<iostream>
#include<cstring>
#include<cstdlib>
using namespace std;
#define MAX 200
int map[MAX][MAX],d[MAX];
int m,n;
int main()
{
    int i,j,a,b,*q;
    int base,top;
    while(cin>>m>>n,m||n)
    {
        base=top=0;
        q=(int *)malloc(2000*sizeof(int));
        memset(map,0,sizeof(map));
        memset(d,0,sizeof(d));
        for(i=0;i<n;i++)
        {
            cin>>a>>b;
            map[a][b]=1;
            d[b]++;
        }
        for(i=1;i<=m;i++)
            if(d[i]==0)
                q[top++]=i;
        while(top!=base)
        {
            a=q[--top];
            cout<<a;
            for(j=1;j<=m;j++)
                if(map[a][j]==1&&d[j]!=0)
                {
                    d[j]--;
                    if(!d[j])
                        q[top++]=j;
                }
            if(top!=base)
                cout<<" ";
        }
        cout<<endl;
    }
    return 0;
}
