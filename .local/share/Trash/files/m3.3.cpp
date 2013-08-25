#include<cstdio>
using namespace std;
int main ()
{
    int k;
    int x,y,count=0;
    while(~scanf("%d",&k))
    {
        for(y=k+1;y<=2*k;y++)
        {
            x=(k*y)/(y-k);
            if(x*(y-k)==k*y)
            {
                count++;
            }
        }
        printf("%d\n",count);
        for(int j=k+1;j<=2*k;j++)
        {
            x=(k*y)/(y-k);
            if(x*(y-k)==k*y)
            {
                printf("1/%d=1/%d+1/%d",k,x,y);
            }
        }
    }
    return 0;
}
