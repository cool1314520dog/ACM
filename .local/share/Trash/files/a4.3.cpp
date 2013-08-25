#include<iostream>
#include<cstdio>
#include<cstring>
#include<algorithm>
using namespace std;
char s[100];
int cmp(char a,char b)
{
    return a>b;
}
int main()
{
    int n;
    scanf("%d",&n);
    while(n--)
    {
        scanf("%s",s);
        int len=strlen(s);
        sort(s,s+len,cmp);
        cout<<s<<endl;
        while(next_permutation(s,s+len))
        {
          cout<<s<<endl;
        }
        cout<<endl;
    }
    return 0;
}
