#include<stdio.h>
int a[30];
int huiwen(int s[],int n) /*判断是否回文*/
{
    int i;
    for(i=0;i<=n/2;i++)
    {
        if(a[i]!=a[n-i])
        {
            return 0;
            break;
        }
    }
    return 1;
}
int converse(int n,int k) /*把十进制的n转化为k进制*/
{
    int flag=0,i,j=0;
    while(n)
    {
        a[j++]=n%k;
        n/=k;
    }
    if(huiwen(a,j-1))
      flag=1;
    if(flag)  /*n在k进制下是回文数*/
      return 1;
    else
      return 0;
}
int main()
{
    int i,j,k,n,cnt;
    while(~scanf("%d",&n))
    {
        for(j=n+1;;j++)
        {
            int p=0;
            for(i=2,cnt=0;i<=10;i++)
            {
                if(converse(j,i))
                   cnt++;  /*记录回文次数*/
                if(cnt>=2)  /*是双基回文数*/
                {
                    p=1;
                    break;
                }
            }
            if(p)
            {
                printf("%d\n",j);
                break;
            }
        }
    }
    return 0;
}
