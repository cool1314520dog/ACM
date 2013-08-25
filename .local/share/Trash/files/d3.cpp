#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#define ALNUM 51
#define MAXN 10010
int word[ALNUM+4][ALNUM+4];
int times[ALNUM+4];
int record[ALNUM+4];
//int print[MAXN][2];
int n,sum;

int Traverse(int x)
{
    int j;
    for(j=0;j<ALNUM;++j)
    {
        if(word[x][j]!=0)
        {
            word[x][j]--;
            word[j][x]--;
            Traverse(j);
            printf("%d %d\n",j,x);
        }
    }
}

int TraverseOut(int current)
{
    int j;
    times[current]=1;
    for(j=0;j<ALNUM;++j)
    {
        if(word[current][j]!=0&&!times[j])
            TraverseOut(j);
    }
    return 0;
}

int main()
{
    int T,i,j,len,flag,point,list,t=0,cnt,count,k,x,y;
    scanf("%d",&T);
    while(T--)
    {
        scanf("%d",&n);
        getchar();
        memset(word,0,sizeof(word));
        memset(record,0,sizeof(record));
        for(i=0;i<n;++i)
        {
            scanf("%d%d",&point,&list);
            ++word[point][list];
            ++word[list][point];
            record[point]++;
            record[list]++;
        }
        flag=0;
        for(i=0;i<ALNUM;++i)
        {
            if(record[i]%2!=0)
            {
                flag=1;
                break;
            }
        }
        if(flag==0)
        {
            for(i=0;i<ALNUM;++i)
                if(record[i]!=0)
                {
                    memset(times,0,sizeof(times));
                    TraverseOut(i);
                    for(j=0;j<ALNUM;++j)
                    {
                        if(record[j]!=0&&!times[j])
                        {
                            flag=1;
                            break;
                        }
                    }
                    break;
                }
        }
            if(t!=0)
                printf("\n");
            printf("Case #%d\n",++t);
            if(flag==0)
            {
                for(i=0;i<ALNUM;++i)
                    if(record[i]!=0)
                    {
                        Traverse(i);
                        break;
                    }
            }
            else
                printf("some beads may be lost\n");
    }
        return 0;
}
