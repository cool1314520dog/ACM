#include<cstdio>
#include<cstdlib>
using namespace std;
#define MAXBALL 500000
#define MAXCOM 100000
struct Ball
{
    int num;
    Ball *next;
};
int main()
{
    Ball *head,*p,*q;
    Ball *px,*prex,*py,*prey;
    int m,n,x,y;
    char com;
    int i;
    scanf("%d%d",&n,&m);
    head=(Ball*)malloc(sizeof(Ball));
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
        px=prey->next;
        py=prey->next;
        scanf("\n%c%d%d",&com,&x,&y);
        if(x==y)
        {
            printf("error\n");
            exit(1);
        }
        else
        {


