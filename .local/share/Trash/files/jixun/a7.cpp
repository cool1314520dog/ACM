#include<cstdio>
#include<cstring>
using namespace std;
int dir[8][2]={{-2,-1},{-2,1},{-1,2},{-1,-2},{1,2},{1,-2},{2,-1},{2,1}};
int move(int arr[][10],int x1,int y1,int x2,int y2,int sum)
{
    if(x1==x2&&y1==y2)
        return 1;
    for(int t=0;t<8;t++)
    {
        int i,j;
        i=x1+dir[t][0];
        j=y1+dir[t][1];
        if(0<=i&&i<8&&0<=j&&j<8)
        {
            if(arr[i][j]==-1||(arr[i][j]>0&&arr[i][j]>sum))
            {
                arr[i][j]=sum;
                move(arr,i,j,x2,y2,sum+1);
            }
        }
    }
    return 1;
}
int main()
{
    int arr[10][10],x1,y1,x2,y2;
    char str1[4],str2[4];
    while(scanf("%s%s",str1,str2)!=EOF)
    {
        x1=str1[0]-'a';
        y1=str1[1]-'1';
        x2=str2[0]-'a';
        y2=str2[1]-'1';
        memset(arr,-1,sizeof(arr));
        for(int t=0;t<8;t++)
        {
            arr[x1][y1]=0;
            int i=x1+dir[t][0],j=y1+dir[t][1];
            if(0<=i&&i<8&&0<=j&&j<8)
            {
                arr[i][j]=1;
                move(arr,i,j,x2,y2,2);
            }
        }
        printf("To get from %s to %s takes %d knight moves.\n",str1,str2,arr[x2][y2]);
    }
    return 0;
}


