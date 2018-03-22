#include<iostream>
#include<cstring>
#include<cstdio>
#include<cstdlib>
using namespace std;
bool large(char *,char *);
int shifter(char *);
int main(void)
{
	char a[5000],b[5000],c[5000],x[5000],y[5000];
	char m,n,r,s=0;
	bool flag;
	int l1,l2,i,j,k=0,l,pos;
	cout<<"Enter the two numbers:\n";
	gets(a);
	gets(b);
	flag=large(a,b);
	cout<<"\nDifference=";
	if(flag==true)
	{
		strcpy(x,a);
		strcpy(y,b);	
	}
	else
	{
		strcpy(x,b);
		strcpy(y,a);
		cout<<"-";
	}
	l1=strlen(x);
	l2=strlen(y);
	for(i=l1-1,j=l2-1;i>=0 || j>=0;i--,j--)
	{
		if(i>=0 && j>=0)
		{
			m=x[i]-'0';
			n=y[j]-'0'+s;
			if(n>=10)
			{
				s=1;
				flag=true;
				n=n%10;
			}
			else
			{
				s=0;
				flag=false;
			}
			if(m<n)
			{
				m=m+10;
				s=1;
			}
			else if(flag==false)
				s=0;
			r=m-n;
		}
		else
		{
			m=x[i]-'0';
			r=m-s;
			if(m==0)
			{
				r=m+10-s;
				s=1;
			}
			else
			{
				r=m-s;
				s=0;
			}
		}
		c[k]=r+'0';
		k++;
	}
	strrev(c);
	shifter(c);
	cout<<c;
	return 0;
}
bool large(char *p,char *q)
{
	int i,j;		//c is the no. of zeros in the beginning of the number
	bool f;
	int a=shifter(p);
	int b=shifter(q);
	if(strcmp(p,q)==0)
	{
		cout<<"Difference=0";
		exit(0);
	}
	if(a==b)
	{
		for(i=0,j=0;i<a;i++,j++)
		{
			if(p[i]>q[j])
			{
				f=true;
				break;
			}
			else if(p[i]<q[j])
			{
				f=false;
				break;
			}
		}
	}
	else if(a>b)
	{
		f=true;
	}
	else
	{
		f=false;
	}
	return f;
}
int shifter(char *p)
{
	int a,m,i,c=0;
	a=strlen(p);
	m=a;
	for(i=0;i<m;i++)
	{
		if(p[i]=='0')
			c++;
		else
			break;
	}
	a=a-c;
	for(i=0;i<m;i++)
	{
		if(i<a)
			p[i]=p[i+c];
		else
			p[i]=NULL;
	}
	return a;
}

