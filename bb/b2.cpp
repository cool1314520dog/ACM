#include<stdio.h>
#include<stdlib.h>
int main()
{
    long n;
    while(scanf("%ld",&n)!=EOF)
    {
        if(n==0)
            break;
        long s=0,i=1;
        for(;;)
        {
            s+=i;
            if(s>=n)
            {
                if(s%2==1)
                {
                    if(s-n>i/2)
                        printf("%ld %ld\n",i/2+1,i+n-s);
                    else
                        printf("%ld %ld\n",s+1-n,i/2+1);
                    break;
                }
                else
                {
                    if(s-n>i/2)
                        printf("%ld %ld\n",i+n-s,i/2+1);
                    else
                        printf("%ld %ld\n",i/2+1,s+1-n);
                    break;
                }
            }
            i+=2;
        }
    }
    return 0;
}
