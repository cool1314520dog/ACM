#include <iostream>
#include <math.h>
#include <malloc.h>
#include<stdlib.h>
using namespace std;

int *position; //放置的位置
int queen; //皇后数目
int count; //第N种可能性

//判断第n行是否放置皇后
bool SignPoint(int n)
{
for (int i=0;i<n;i++)
{
   if (position[i] == position[n]) //该列已经放置过皇后了
    return false;
  if (abs(position[i] - position[n]) == n-i) //对角线已经放置过了
    return false;
}
return true;
}

//设置皇后
void SetQueen(int n=0)
{
if (queen==n)
{
   //该处可以改成自己想要的显示方式
   printf("NO.%d: ",++count);
   printf("\n");
   for (int i=0;i<queen;i++)
   {
    for (int j=0;j<queen;j++)
    {
     if (j == position[i])
     {
      printf("* ");
     }
     else
     {
      printf("0 ");
     }
    }
    printf("\n");
   }
   printf("\n");
   return;
}
else
{
   for (int i=0;i<queen;i++)
   {
    position[n] = i;

    if(SignPoint(n))//如果该位置放置皇后正确的话,则到下一行
    {
     SetQueen(n+1);
    }
   }
}
}

int main(int argc, char argv[])
{
cout<<"请输入皇后的总数:"<<endl;
cin>>queen;
position = (int*)malloc(queen*sizeof(int));
SetQueen();
cout<<"摆放完毕"<<endl;
cin.get();
cin.get();
return 0;
}
