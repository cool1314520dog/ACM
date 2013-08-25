#include <stdio.h> 
int main() 
{ 
 int a=0,i=0,x=0; 
 bool b[11];//0不使用,
 for(i=0;i<11;i++)
  b[i]=true;

 for(i=0;i<1000;i++) 
 {
  a+=(i+1);
  x=a%10;
  b[x]=false;
 }
 
 for(i=0;i<10;i++) 
 { 
  if(b[i])
  {
   printf("可能在第%d个洞\n",i); 
  }
 }
return 0;
}
