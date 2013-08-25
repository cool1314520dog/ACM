#include<cstdio>
#include<stack>
#include<queue>
using namespace std;
#define maxn 1000
int arr[maxn],arr2[maxn];
int n;
bool isstack()
{
    stack<int>s;
    for(int i=0; i<n; i++)
    {
        if(arr[i]==1)
            s.push(arr2[i]);
        else
        {
            if(s.empty())
                return false;
            int tmp=s.top();
            s.pop();
            if(arr[2]!=tmp)
                return false;
        }
    }
    return true;
}
bool isqueue()
{
    queue<int>q;
    for(int i=0; i<n; i++)
    {
        if(arr[i]==1)
            q.push(arr2[i]);
        else
        {
            if(q.empty())
                return false;
            int tmp=q.front();
            q.pop();
            if(arr2[i]!=tmp)
                return false;
        }
    }
    return true;
}
bool ispriority()
{
    priority_queue<int>p;
    for(int i=0; i<n; i++)
    {
        if(arr[i]==1)
            p.push(arr2[i]);
        else
        {
            if(p.empty())
                return false;
            int tmp=p.pop();
            p.pop();
            if(arr[2]!=tmp)
                return false;
        }
    }
    return true;
}
int main()
{
    while(~scanf("%d",&n))
    {

