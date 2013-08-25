#include<stdio.h>  
#include<string.h>  
int main() 
{ 
    int i,j,n,s1,s2,flag[10]; 
    while(~scanf("%d",&n)) 
    { 
        for(i=1234;i<5000;i++) 
        { 
            memset(flag,0,sizeof(flag)); 
            /*flag保存每一位数字*/ 
            s1=i; 
            s2=i*n; 
            while(s1||s2) 
            { 
                if(!flag[s1%10]) 
                { 
                    flag[s1%10]=1; 
                    s1/=10; 
                } 
                else 
                    break; 
                if(!flag[s2%10]) 
                { 
                    flag[s2%10]=1; 
                    s2/=10; 
                } 
                else 
                    break; 
            } 
            for(j=0;j<10;j++) 
              if(!flag[j]) 
                  break;  /*判断是否是10个各不相同的数字*/ 
            if(j==10&&i*n<=98765) /*如果数字各不相同*/ 
            { 
                if(i<10000) /*除数是一个四位数，有前导0*/ 
                  printf("%d / 0%d = %d\n",i*n,i,n); 
                else 
                  printf("%d / %d = %d\n",i*n,i,n); 
            } 
        } 
    }
}
