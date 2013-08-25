#include<stdio.h>
#include<string.h>
int f,visit[10],a[10],b[10];
int sort(int n,int num)
{
    int i;
    if((n==5)&&(num==23))
        f=1;
    if((n>=5)||(f))
        return 0;
    for(i=1;i<=5;i++)
        if(visit[i]==0)
        {
            sort(n+1,num+a[i]);
            sort(n+1,num-a[i]);
            sort(n+1,num*a[i]);
            visit[i]=0;
        }
}
int main()
{
    int i;
    while(scanf("%d",&a[1]))
    {
        for(i=2;i<=5;i++)
            scanf("%d",&a[i]);
        if(a[1]==0&&a[2]==0&&a[3]==0&&a[4]==0&&a[5]==0)
            break;
        memset(visit,0,sizeof(visit));
        memset(b,0,sizeof(b));
        f=0;
        for(i=1;i<=5;i++)
        {
            visit[i]=1;
            sort(1,a[i]);
            visit[i]=0;
        }
        if(f)
            printf("Possible\n");
        else
            printf("Impossible\n");
    }
    return 0;
}


