#include<stdio.h>  
#include<string.h>  
struct integer 
{ 
    int X,Y; 
}a[10000]; 
int main() 
{ 
    int i,j,y,k,count; 
    while(~scanf("%d",&k)) 
    { 
        memset(a,0,sizeof(a)); 
        i=count=0; 
        for(y=k+1;y<=k*2;y++) 
        { 
            if(y*k%(y-k)==0) 
            { 
                count++; 
                a[i].X=y*k/(y-k); 
                a[i++].Y=y; 
            } 
        } 
        printf("%d\n",count); 
        for(j=0;j<i;j++) 
            printf("1/%d = 1/%d + 1/%d\n",k,a[j].X,a[j].Y); 
    } 
    return 0; 
} 
