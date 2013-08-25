#include<iostream>
#include<cstdio>
#include<cstring>
#include<cctype>
using namespace std;
typedef struct matrix
{
    char name;
    int row;
    int col;
}matrix;
matrix m[1000];
matrix stack1[1000];
int ins[26][2];
char a[1000],b[1000],stack2[1000];
int main()
{
    int j,n,sum,top1,top2;
    cin>>n;
    for(int i=0;i<n;i++)
    {
	cin>>m[i].name;
	cin>>m[i].row>>m[i].col;
    }
    while(cin>>a)
    {
	j=0,sum=0,top1=-1,top2=-1;
        for(int i=0;i<(int)strlen(a);i++)
	    if(isupper(a[i]))
	    {
		b[j]=a[i];
		j++;
	    }
	b[j]='\0';
	int flag=0;
	for(int i=0;i<(int)strlen(b)-1;i++)
	    if(m[b[i]-'A'].col!=m[b[i+1]-'A'].row)
	    {
		flag=1;
		break;
	    }
	if(flag==1)
	{
	    puts("error");
	    continue;
	}
	else
	{
	    for(int i=0;i<(int)strlen(a);i++)
	    {
		if(isalpha(a[i]))
		{
		    top1++;
		    stack1[top1]=m[a[i]-'A'];
		}
		if(a[i]=='(')
		{
		    top2++;
		    stack2[top2]='(';
		}
		if(a[i]==')')
		{
		    top2--;
		    sum+=stack1[top1].row*stack1[top1].col*stack1[top1-1].row;
		    top1--;
		    stack1[top1].col=stack1[top1+1].col;
		}
	    }
	    cout<<sum<<endl;
	}
    }
    return 0;
}
