#include<iostream>
#include<cstring>
#include<cstdio>
using namespace std;
class Queue
{
	int front ;
	int rear ;
	int a[50];
	int size; 
	public:
		Queue()
		{
			front=-1;
			rear=-1;
			size=50;
		}
		void enqueue(int e)
		{
			if(front==-1 && rear==-1)
			{
				front=0;
				rear=0;
			}
			else if(rear==size-1)
			{
				cout<<"\nOVERFLOW\n";
			}
			else
				rear=rear+1;
			a[rear]=e;
		}
		int dequeue(void)
		{
			int e;
			if(rear==-1)
				cout<<"\nUNDERFLOW\n";
			else if(front==rear)
			{
				e=a[rear];
				front=rear=-1;
			}
			else
			{
				e=a[front];
				front++;
			}
			return e;
		}
		void display(void)
		{
			if(front==-1)
			{
				cout<<"\nEmpty queue\n";
				return;
			}
			cout<<"Queue elements are:\n";
			int i=front;
			while(i<=rear)
			{
				cout<<a[i]<<" ";
				i++;
			}
		}
};
int main()
{
	Queue q;
	int ch,n;
	char ans='Y';
	do
	{
		cout<<"\tMenu\n\n";
		cout<<"1. Enqueue\n";
		cout<<"2. Dequeue\n";
		cout<<"3. Display\n";
		cout<<"\nEnter your choice: ";
		cin>>ch;
		switch(ch)
		{
			case 1: cout<<"Enter the element to be inserted: ";
					cin>>n;
					q.enqueue(n);
					break;
				
			case 2: n=q.dequeue();
					break;
				
			case 3: q.display();
					break;
				
			default: cout<<"Wrong Choice";
		}
		cout<<"\nContinue(y/n)?";
		getchar();
		ans=cin.get();
	}while(ans=='Y'||ans=='y');
	return 0;
}
