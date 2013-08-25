#include<stdio.h>
const int MAXN =1000+10;
int target[MAXN];
int stack[MAXN],top=0;
int main()
{
    int n;
    while(scanf("%d",&n)==1)
    {
        for(int i=1;i<=n;i++)
            scanf("%d",&target[i]);
        int ok=1;
        int a=1,b=1;
        while(b<=n)
        {
            if(a==target[b])
            {
                a++;
                b++;
            }
            else if(top&&stack[top]==target[b])
            {
                top--;
                b++;
            }
            else if(a<=n)
            {
                stack[++top]=a++;
            }
            else
            {
                ok=0;
                break;
            }
        }
        printf("%s\n",ok?"yes":"no");
    }
    return 0;
}


    
