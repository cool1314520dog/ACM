#include<stdio.h>
#include<string.h>
char str[1000][100];
int num;
bool ball()
{
    for(int i=0;i<num;i++)
        for(int j=0;j<num;j++)
        {
            if(i==j)
                continue;
            if(strstr(str[i],str[j])-str[i]==0)
                return false;
        }
    return true;
}
int main()
{
    num=0;
    int ans=1;
    while(~scanf("%s",str[num]))
    {
        if(str[num][0]=='9')
        {
            if(ball())
                printf("Set %d is immediately decodable\n",ans++);
            else 
                printf("Set %d is not immediately decodable\n",ans++);
            num=0;
        }
        else
            num++;
    }
    return 0;
}

