#include<iostream>
#include<string>
int main()

{
    int n,i,j,k,l;
    i=0;
    j=0;
    k=0;
    l=0;
    scanf("%d",&n);
    string s;
	if(s.find=='(')
	    i++;
        else  if(s.find==')')
	    j++;
	else if(s.find=='[')
	    k++;
	else if(s.find==']')
	    l++;
    if(i==j)
	printf("yes");
    if(k==l)
	printf("no");
    return 0;
    }

}
