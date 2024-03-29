#include<stdio.h>
#include<stdlib.h>
#include<string.h>
const int MAXN=256;
char s[MAXN+10];
int failed;
typedef struct Tnode
{
    int have_value;
    int v;
    struct Tnode *left,*right;
}Node;
Node * root;
Node * newnode()
{
    Node *u=(Node*)malloc(sizeof(Node));
    if(u!=NULL)
    {
        u->have_value=0;
        u->left=u->right=NULL;
    }
    return u;
}
void addnode(int v,char*s)
{
    int n=strlen(s)-1;
    Node* u=root;
    for(int i=0;i<n;i++)
    if(s[i]=='L')
    {
        if(u->left==NULL)
            u->left=newnode();
        u=u->left;
    }
    else if(s[i]=='R')
    {
        if(u->right==NULL)
            u->right=newnode();
        u=u->right;
    }
    if(u->have_value)
        failed=1;
        u->v=v;
        u->have_value=1;
}
int n=0,ans[MAXN];
int bfs()
{
    int front=0,rear=1;
    Node*q[MAXN];
    q[0]=root;
    while(front<rear)
    {
        Node*u=q[front++];
        if(!u->have_value)
            return 0;
        ans[n++]=u->v;
        printf("%d ", u->v);
        if(u->left!=NULL)
            q[rear++]=u->left;
        if(u->right!=NULL)
            q[rear++]=u->right;
    }
    return 1;
}
int read_input()
{
    failed=0;
    root=newnode();
    for(;;)
    {
        if(scanf("%s",s)!=1)
            return 0;
        if(!strcmp(s,"()"))
        {
            break;
        }
        int v;
        sscanf(&s[1],"%d",&v);
        addnode(v,strchr(s,',')+1);
    }
    return 1;
}
int main()
{
    while(read_input())
    {
        n=0;
        if(!bfs())
            failed=1;
        if(failed)
            printf("-1\n");
        else
        {
            for(int i=0;i<n;i++)
                if(0==i)
                    printf("%d",ans[i]);
                else
                    printf("%d",ans[i]);
            printf("\n");
        }
    }
    return 0;
}
