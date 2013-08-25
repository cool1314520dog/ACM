#include<stdio.h>
int max,sum=0,pos[10],row[10],map[10][10];
void dfs(int x,int num)
{int i,j,f;
 if ((x>8)&&(num>max)) max=num; //八个都放好后才保留最大值
 if (x>8) return ;
 for (i=1;i<=8;i++)
 {f=1; 
  pos[x]=i;
  if (row[i]) f=0;
  for (j=1;j<x;j++)
  if ((x+i==pos[j]+j)||(x-i==j-pos[j])) f=0; //第二个条件画蛇添足加了绝对值，后来才看到
  if (f)
   {
    row[i]=1;
    dfs(x+1,num+map[x][i]);
    row[i]=0;
   }
 }
};
int main()
{int i,j,t;
 scanf("%d",&t);
 while (t--)
 {
 for (i=1;i<=8;i++)
 for (j=1;j<=8;j++)
 scanf("%d",&map[i][j]);
 max=map[1][1];
 for (i=1;i<9;i++) row[i]=0;
 dfs(1,0);
 printf("%5d\n",max);
 }
 return 0;
}



