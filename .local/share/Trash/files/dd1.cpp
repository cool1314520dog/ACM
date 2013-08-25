#include<cstdio>
#include<cstring>
#include<iostream>
#include<algorithm>
#include<queue>
using namespace std;
struct ball
{
    int first;
    int ok;
}arr[105];
int num[105];
int cmp (int a,int b)
{
    return a>b;
}
int main()
{
    int T;
    scanf("%d",&T);
    while(T--)
    {
        memset(arr,0,sizeof(arr));
        memset(num,0,sizeof(num));
        int n,m;
        scanf("%d%d",&n,&m);
        queue<ball>q;
        arr[m].ok=1;
        int a=0,b=1;
        for(int i=0;i<n;i++)
        {
            scanf("%d",&num[i]);
            arr[i].first=num[i];
            q.push(arr[i]);
        }
        sort(num,num+n,cmp);
        while(q.front().first!=num[a]||!q.front().ok)
        {
          //  ball temp=q.front();
            q.pop();
            if(q.front().first==num[a])
            {
                a++;
                ++b;
            }
            else
                q.push(q.front());
        }
        printf("%d\n",b);
    }
    return 0;
}


