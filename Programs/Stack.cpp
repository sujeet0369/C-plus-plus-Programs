#include<iostream>
#include<cstdio>
using namespace std;
class Stack
{
	int top ;
	int a[50];
	int  n;
	
	public:
		Stack()
		{
			top=-1;
			n=50;
		}
		void push(int e)
		{
			if(top==n-1)
				cout<<"OVERFLOW\n";
			else
			{
				top++;
				a[top]=e;
			}	
		}
		int pop(void)
		{
			int v;
			if(top==-1)
				cout<<"UNDERFLOW\n";
			else
			{
				int v=a[top];
				top--;
			}
			return v;
		}
		void display(void)
		{
			int x=top;
			if(top>=0)
			{
				do
				{
					cout<<a[x]<<endl;
					x--;
				}while(x>=0);
			}
			else
				cout<<"Empty Stack";	
		}
};
int main(void)
{
	int ch,n;
	char ans='Y';
	Stack s;
	do
	{
		cout<<"\tMenu\n\n";
		cout<<"1. Push\n";
		cout<<"2. Pop\n";
		cout<<"3. Display\n";
		cout<<"\nEnter your choice: ";
		cin>>ch;
		switch(ch)
		{
			case 1: cout<<"Enter the element to be pushed: ";
					cin>>n;
					s.push(n);
					break;
				
			case 2: n=s.pop();
					break;
				
			case 3: s.display();
					break;
				
			default: cout<<"Wrong Choice";
		}
		cout<<"\nContinue(y/n)?";
	getchar();
		ans=cin.get();
	}while(ans=='Y'||ans=='y');
	return 0;
}

