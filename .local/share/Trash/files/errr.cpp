#include<cstdio>
#include<cstring>
#include<cctype>
using namespace std;
char str[60][60];
char s[60];
int dis[8][2]={{-1,-1},{-1,0},{-1,1},{0,-1},{0,1},{1,-1},{1,0},{1,1}};
int a,b,tot,length,t,word;
int m,n,x,y;
int find (char s[])
{
    int i,j,k,p;
    for(i=1;i<=m;i++)
        for(j=1;j<=n;j++)
        {
            if(str[i][j]==s[0])
            {
                a=i;
                b=j;
                for(k=0;k<8;k++)
                {
                    tot=1;
                    x=i;
                    y=j;
                    p=1;
                    while(length>tot)
                    {
                        x=dis[k][0]+x;
                        y=dis[k][1]+y;
                        if(x<1||x>m||y<1||y>n)
                            break;
                        if(str[x][y]==s[p++])
                            tot++;
                        else 
                            break;
                    }
                    if(length==tot)
                        return 1;
                }
            }
        }
    return 0;
}
int main()
{
    char c;
    scanf("%d",&t);
    while(t--)
    {
        int i,j;
        scanf("%d %d",&m,&n);
        if(t>=2)
            printf("\n");
        for(i=1;i<=m;i++)
        {
            getchar();
            for(j=1;j<=n;j++)
            {
                scanf("%c",&c);
                if(isalpha(c))
                    str[i][j]=toupper(c);
            }
        }
        scanf("%d",&word);
        for(i=1;i<=word;i++)
        {
            scanf("%s",s);
            length=strlen(s);
            for(j=0;j<length;j++)
                if(isalpha(s[j]))
                    s[j]=toupper(s[j]);
            if(find(s))
                printf("%d %d\n",a,b);
        }
    }
    return 0;
}
