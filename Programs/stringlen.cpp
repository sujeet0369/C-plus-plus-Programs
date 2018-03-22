#include<iostream>
#include<conio.h>
using namespace std;
int main(void)
{
	char str[500];
	cout<<"enter the string:"<<endl;
	  gets(str);
	int i,c=0;
	for(i=0;str[i]!='\0';i++)
	{
		c++;
	}
	cout<<"length of string is"<<endl;
	cout<<c;
	getch();
	return 0;
	
}
