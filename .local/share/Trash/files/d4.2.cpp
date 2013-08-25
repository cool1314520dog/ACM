#include<stdio.h>
#include<string.h>
int f,visit[10],a[10],b[10];
int sort(int n,int num)
{
    int i;
    if(n==5&&n==23)
        f=1;
    if(n>=5||f)
        return 0;

