#include<iostream>
using namespace std;
#define MAX 10
class stack
{
    private :
	int arr[MAX];
	int top;
    public:
	stack()
	{
	    initStack();
	}
	void initStack()
	{
	    top=-1;
	}
	void push(int a)
	{
	    top++;
	    if(top<MAX)
		arr[top]=a;
	    else
		cout<<"full"<<top;
	}
	int pop()
	{
	    if(isEmpty())
	    {
		cout<<"empty";
		return 0;
	    }
	    else 
	    {
		int data=arr[top];
		arr[top]=0;
		top--;
		return data;
	    }

	}
	bool isEmpty()
	{
	    if(top==-1)
		return true;
	    else
		return false;
	}

};
int main()
{
    stack a;
    a.push(3);
    a.push(10);
    a.push(1);
    cout<<"pop:"<<a.pop();
    return 0;
}
