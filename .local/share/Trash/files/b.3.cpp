#include<string.h>
//#include<stdlib.h>
#include<stdio.h>
#define MAXN 100 + 10
char s[MAXN];
int num[MAXN];
void solve()
{
    int len = strlen(s);
    for(int i = 0; i < len; i ++)
    {
        num[i] += s[len-1-i] - '0';
        if(num[i] > 9) {num[i] %= 10; num[i+1] += 1;}
    }
}
void output()
{
    int i;
    for(i = MAXN; i >= 0; i --)
    if(num[i] != 0) break;
    for(int j = i; j >= 0; j --)
    printf("%d",num[j]);
    printf("\n");
}
void input()
{
    while(scanf("%s",s) == 1)
    {
        if(s[0] == '0') break;
        solve();
    }
}
int main()
{
    memset(num,0,sizeof(num));
    input();
    output();
    //system("pause");
    return 0;
}
