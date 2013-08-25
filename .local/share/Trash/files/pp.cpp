#include<stdio.h>
#include<stdlib.h>
#include<malloc.h>
#define LIST_INIT_SIZE 100
#define LISTINCREMENT 10
#define OVERFLOW -2
#define OK 1
#define ERROR 0
typedef int elemtype;
typedef int Status;
typedef struct
{
    elemtype *elem ;
    int length;
    int listsize;
}sqlist;

int *q,*p;
int n,i ,e,a;
sqlist L;
void output();

Status InitList_sq(sqlist &L)
{
    L.elem=(elemtype*)malloc(LIST_INIT_SIZE*sizeof(elemtype));
    if(!L.elem)
	exit(OVERFLOW);
    L.length=0;
    L.listsize=LIST_INIT_SIZE;
    return OK;
}

Status ListInsert_sq(sqlist &L,int i,int e)
{
    int *newbase;
    printf("input the location");
    scanf("%d",&i);
    printf("input the number ");
    scanf("%d",&e);
    if(i<1||i>L.length+1)
	return ERROR;
    if(L.length>=L.listsize)
    {
	newbase=(int*)realloc(L.elem,(L.listsize+LISTINCREMENT)*sizeof(int));
	if(!newbase)
	    exit(OVERFLOW);
	L.elem=newbase;
	L.listsize+=LISTINCREMENT;
    }
    q=&(L.elem[i-1]);
    for(p=&(L.elem[L.length-1]);p>=q;--p)
	*(p+1)=*p;
    *q=e;
    ++L.length;
    return OK;
}

Status ListDelete_sq(sqlist &L,int i,int e)
{
    printf("input the delete location");
    scanf("%d",&i);
    if(i<1||i>L.length)
	return ERROR;
    p=&(L.elem[i-1]);
    e=*p;
    q=L.elem+L.length-1;
    for(++p;p<=q+1;++p)
	*(p-1)=*p;
    --L.length;
    return OK;
}

void input()
{
    if(InitList_sq(L)!=1)
    {
	printf("error");
	return ;
    }
    printf("the number ");
    scanf("%d",&n);
    InitList_sq(L);
    printf("the number %d",n);
    for(i=0;i<n;i++)
	scanf("%d",&L.elem[i]);
    L.length=i;
    output();
}

void output()
{
    printf("after the number");
    for(i=0;i<L.length;i++)
	printf("%d",L.elem[i]);
    printf("\n");
}

int   main()
{
    do
    {
	printf("input the case number");
	scanf("%d",&a);
	switch(a)
	    {
		case 1:input();break;
		case 2:if(ListInsert_sq(L,i,e)==1)
			   output();
		       else
			   printf("error");
		       break;
		case 3:if(ListDelete_sq(L,i,e)==1)
		       {
			   output();
			   printf("delete number %d \n",e);
		       }
		       else 
			   printf("error\n");
		       break;
		default:printf("error\n");
	    }
    }while(a!=0);
    return 0;
}
