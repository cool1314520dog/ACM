#include<iostream>
#include<cstring>
using namespace std;
int n;
int k;
struct node
{
    char name[21];
    int level;
    node *father;
}a[1001],head;
int find (node &tmp)
{
    for(int j=0;j<n;j++)
    {
        if(strcmp(tmp.name,a[j].name)==0)
            return j;
    }
}
void set_levels(node &p)
{
    if(strcmp(p.father->name,"Alice"))
    {
        k++;
        set_levels(*p.father);
    }
}
int main()
{
    while(cin>>n)
    {
        memset(a,0,sizeof(a));
        strcpy(head.name,"Alice");
        head.father=NULL;
        for(int i=0;i<n;i++)
        {
           node tmp;
           cin>>a[i].name>>tmp.name;
           if(strcmp(tmp.name,"Alice")==0)
           {
               a[i].father=&head;
           }
            else
           {
               a[i].father=&a[find(tmp)];
           }
        }
        for(int i=0;i<n;i++)
        {
            k=1;
            set_levels(a[i]);
            a[i].level=k;
        }
        for(int i=0;i<n;i++)
        {
            for(int j=i+1;j<n;j++)
            {
                if(a[i].level>a[j].level)
                {
                    node t;
                    t=a[i];
                    a[i]=a[j];
                    a[j]=t;
                }
                else if(a[i].level==a[j].level)
                {
                    if(strcmp(a[i].name,a[j].name)>0)
                    {
                        node t;
                        t=a[i];
                        a[i]=a[j];
                        a[j]=t;
                    }
                }
            }
        }
    }
    return 0;
}

