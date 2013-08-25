#include<stdio.h>
#include<stdlib.h>
const int N = 20;
int q[N];
int cont=0;
void print(int n)
{
    int i,j;
    cont++;
    printf("第%d个解：",cont);
    for(i=1;i<=n;i++)
        printf("(%d,%d)",i,q[i]);
    printf("\n");
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            if(q[i]!=j)
                printf("x ");
            else
                printf("Q ");
        }
        printf("\n");
    }
}
int find(int i,int k)
{
    int j=1;
    while(j<i)
    {
        if(q[j]==k||abs(j-i)==abs(q[j]-k))
            return 0;
        j++;
    }
    return 1;
}
void place(int k,int n)
{
    int j;
    if(k>n)
        print(n);
    else
    {
        for(j=1;j<=n;j++)
        {
            if(find(k,j))
            {
                q[k]=j;
                place(k+1,n);
            }
        }
    }
}
int main()
{
    int n;
    scanf("%d",&n);
    if(n>20)
        printf("error\n");
    else
    {
        place(1,n);
        printf("\n");
    }
    return 0;
}

