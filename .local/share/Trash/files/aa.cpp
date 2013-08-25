#include<stdio.h>
#define m 3
#define n 4

void  tramat (int a[][n],int b[][m])
{
    int i ,j ;
    for(i=0;i<m;i++)
	for(j=0;j<n;j++)
	    b[j][i]=a[i][j];
}

void addmat (int c[][n],int a[][n],int b[][n])
{
    int i,j;
    for(i=0;i<m;i++)
	for(j=0;j<n;j++)
	    c[i][j]=a[i][j]+b[i][j];
}

void mutmat(int c[m][m],int a[][n],int b[][m])
{
    int i,j,k;
    for(i=0;i<m;i++)
	for(j=0;j<m;j++)
	{
	    c[i][j]=0;
	    for(k=0;k<n;k++)
	    c[i][j]+=a[i][k]*b[k][j];
	}
}

int main()
{
    int c[m][n],a[m][n],b[n][m],d[m][n],e[m][m];
    for(int i=0;i<m;i++)
	for(int j=0;j<n;j++)
	    scanf("%d",&a[i][j]);
    tramat(a,b);
    for(int i=0;i<n;i++){
	for(int j=0;j<m;j++)
	    printf("%d",b[i][j]);
	printf("\n");
    }
    for(int i=0;i<m;i++)
        for(int j=0;j<n;j++)
	    d[i][j]=a[i][j];
    addmat(c,a,d);
    for(int i=0;i<m;i++){
	for(int j=0;j<n;j++)
	    printf("%3d",c[i][j]);
	printf("\n");
    }
    mutmat(e,a,b);
    for(int i=0;i<m;i++){
	for(int j=0;j<m;j++)
	printf("%3d",e[i][j]);
	printf("\n");
    }
    return 0;
}








