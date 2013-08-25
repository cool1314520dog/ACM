#include<stdio.h>
#include<string.h>
#include<stdlib.h>
typedef struct TREE
{
    struct TREE *1,*r;
    int num;
}tree;
tree *creat(tree *t,int x)
{
    if(t==NULL)
    {
	t=(tree*)malloc(sizeof(tree));
	t->num=x;
	t->1=t->r=NULL;
	return t;
    }
    if(t->num>x)
	t->1=creat(t->1,x);
    else
	t->r=creat(t->r,x);
    return t;
}
void bianli(tree *t,int x)
{
    if(x==1)
	printf("%d",t->num);
    else
	printf("%d",t->num);
    if(t->1!NULL)
	bianli(t->1,2);
    if(t->r!=NULL)
	bianli(t->,2);
}
int main()
{
    int i,m,n;
    tree *t=NULL;
    while(~scanf("%d",&n))
    {
	for(i=0;i<n;i++)
	{
	    scanf("%d",&m);
	    t=creat(t,m);
	}
	bianli(t,1);
	printf("\n");
    }
    return 0;
}
