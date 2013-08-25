#include<stdio.h>  
#include<string.h>  
const int inf=999999; 
int main() 
{ 
    long long a[20],s[20]; 
    long long i,j,n,max; 
    while(~scanf("%lld",&n)) 
    { 
        memset(s,0,sizeof(s)); 
        s[0]=1; 
        max=-inf; 
        for(i=1;i<=n;i++) 
        { 
            scanf("%lld",&a[i]); 
            s[i]=s[i-1]*a[i]; 
            /*s[i]表示从第一个数到第i个数的乘积*/ 
        } 
        for(i=1;i<=n;i++) /*子序列长度*/ 
        { 
            for(j=i;j<=n;j++) 
            { 
                if(s[j]/s[j-i]>max) 
                  max=s[j]/s[j-i]; 
            } 
        } 
        if(max<0) 
           max=-1; 
        printf("%lld\n",max); 
    } 
    return 0; 
} 
