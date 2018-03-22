#include<iostream>
#include<cstring>
#include<stdio.h>
using namespace std;
int main(void)
{
	char a[5000],b[5000],c[6000];
	cout<<"Enter the two numbers:\n";
	gets(a);
	gets(b);
	int l1,l2,i,j,k=0;
 int p,q,r,s=0;
	l1=strlen(a);
	l2=strlen(b);
	for(i=l1-1,j=l2-1;i>=0 || j>=0;i--,j--)
	{
		if(i>=0 && j>=0)
		{	
			p=a[i]-'0';
			q=b[j]-'0';
			r=p+q+s;
			if(r>=10)
			{
				s=1;
				r=r%10;
			}
			else
				s=0;
			c[k]=r+'0';
		}
		else if(i>=0)
		{
			r=a[i]-'0'+s;
			if(r>=10)
			{
				s=1;
				r=r%10;
			}
			else
				s=0;
			c[k]=r+'0';
		}
		else
		{
			r=b[j]-'0'+s;
			if(r>=10)
			{
				s=1;
				r=r%10;
			}
			else
				s=0;
			c[k]=r+'0';
		}
		k++;
	}
	if(s==1)
	{
		c[k]=s+'0';
	}
	strrev(c);
	cout<<"\nSum=";
	puts(c);
	return 0;
}
