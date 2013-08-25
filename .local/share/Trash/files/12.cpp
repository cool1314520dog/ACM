#include<iostream>
#include<queue>
#include<algorithm>
#include<cstring>
using namespace std;
struct pri
{
    int priority;
    bool isyours;
}arr[101];
bool cmp(int a, int b)
{
    return a>b;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        memset(arr,0,sizeof(pri)*100);
        int num[101]={0};
        int a,b;
        cin>>a>>b;
        queue<pri>q;
        for(int  i=0;i<a;i++)
        {
            cin>>num[i];
            arr[i].priority=num[i];
            q.push(arr[i]);
        }
        sort(num,num+a,cmp);
        int index=0,time=1;



