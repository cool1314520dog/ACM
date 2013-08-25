#include<iostream>
#include<cstdio>
#include<queue>
#include<cstring>
#include<algorithm>
using namespace std;
struct ball
{
    int first;
    int ok;
}arr[101];
int cmp (int a,int b)
{
    return a>b;
}
int num[101];
int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        memset(arr,0,sizeof(arr));
        memset(num,0,sizeof(num));
        int n,m;
        scanf("%d%d",&n,&m);
        arr[m].ok=1;
        queue<ball>q;
        for(int i=0;i<n;i++)
        {
            scanf("%d",&num[i]);
            arr[i].first=num[i];
            q.push(arr[i]);
        }
        sort(num,num+n,cmp);
        int a=0,b=1;
        while(q.front().first!=num[a]||!q.front().ok)
        {
            ball temp=q.front();
            q.pop();
            if(temp.first==num[a])
            {
                a++;
                ++b;
            }
            else
                q.push(temp);
        }
        printf("%d\n",b);
    }
    return 0;
}
