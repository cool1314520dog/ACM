#include<stdio.h>
const int MAXN =50;
int queue[MAXN];
int main()
{
    int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
        queue[i]=i+1;
    int front=0,rear=n;
    while(front<rear)
    {
        printf("%d",queue[front++]);
        queue[rear++]=queue[front++];
    }
    return 0;
}

