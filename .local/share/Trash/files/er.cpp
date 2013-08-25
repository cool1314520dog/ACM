#include<iostream>
#include<stdio.h>
#include<string.h>
#include<set>
using namespace std;
char key[25][25];
char exe[75];
char excuses[25][75];
int cnt[100];
int k,e;
int find (char tmp[])//暴力单词匹配 
{
   int sum=0;
   for(int i=0;i<k;i++)
   {
     //scanf("%s",key[i]);        
     if(strcmp(tmp,key[i])==0)
        sum++;
   }   
   return sum;
}
int main()
{
int cas=1;
//freopen("f.out.txt","w",stdout);
while(~scanf("%d%d",&k,&e))
{
   for(int i=0;i<k;i++)
   {
     scanf("%s",key[i]);        
   }
   int max=0; 
   getchar();//用gets的时候最好都要仔细斟酌一番getchar 
   for(int i=0;i<e;i++)
   {
       gets(excuses[i]); 
       /*      //一开始以为最后输出也是小写,后来调试的时候才发现不是 
       int len=strlen(excuses[i]); 
       for(int j=0;j<len;j++)//注意在比较之前化成小写   
          if(excuses[i][j]<='Z' && excuses[i][j]>='A')
               excuses[i][j]+=32;
       */
   }                   
   memset(cnt,0,sizeof(cnt));//note!!
   for(int i=0;i<e;i++)      
   {
      strcpy(exe,excuses[i]);
      int len=strlen(exe);
      char tmp[75];
      int kg=0;
      for(int j=0;j<len;j++)
      {
        if(exe[j]<='z' && exe[j]>='a')
             tmp[kg++]=exe[j];
        else if (exe[j]<='Z' &&exe[j]>='A')       
             tmp[kg++]=exe[j]+32;//转换小写 
        else 
            {
               tmp[kg]='\0';//这里是把后面的之前已经出现过字符的都给灭了 
               if(kg!=0)
                   cnt[i]+=find(tmp);                     
               if(cnt[i]>max)
                   max=cnt[i];//设定一个最大值,然后把和最大值相等的都输出来,nice 
               kg=0;
            }
      }      
   }
   printf("Excuse Set #%d\n",cas++); 
   for(int i=0;i<e;i++)
   {
      if(cnt[i]==max)
          printf("%s\n",excuses[i]);        
   }
   printf("\n");
}
 
//system("pause");
return 0;}

