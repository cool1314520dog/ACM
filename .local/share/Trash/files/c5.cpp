#include<stdio.h>
#include<stdlib.h>
#define MAXBALL 500000
#define MAXCOM 100000
typedef struct ball
{
    int num;
    struct ball *next;
}Ball;
int main()
{
    Ball*head,*p,*q;
    Ball *px ,*prex,*prey,*py;
    int n,m,x,y;
    char com ;
    int i;
    scanf("%d%d",&n,&m);
    if(n>MAXBALL||m>MAXCOM)
    {
        printf("ilegal input\n");
        exit(1);
    }
    head=(Ball *)malloc(sizeof(Ball));
    head->num=0;
    head->next=NULL;
    q=head;
    for(i=0;i<n;i++)
    {
        p=(Ball*)malloc(sizeof(Ball));
        p->num=i+1;
        q->next=p;
        q=p;
    }
    q->next=NULL;
    for(i=0;i<m;i++)
    {
        prex=prey=head;
        px=prex->next;
        py=prey->next;
        scanf("\n%c%d%d",&com,&x,&y);
        if(x==y)
        {
