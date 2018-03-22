#include<iostream>
using namespace std;
#include<iomanip>
#include<math.h>
# define pi 3.143
 int main(void)
{   
 float f,i,k,j ;
int  s,r,t;
for(i=0;i<= 27;i++)
{
	cout<<"--";
}
cout<<endl;
for(i=0;i<=1;i+=0.0833)
{
	f=sin(pi*i);
	r=(int)(f*10*2.5);
	cout<<setw(27)<<"|";
	for(j=0;j<=r;j++)
	{
		cout<<"*";	
	}
    cout<<endl;
	}
 
	k=  0;
 while(k<=1)
 {
 
    
  f=sin(pi*k);
   s=(int)(f*10*2.5);
    
 cout<<setw(26-s);
 
  	for(j=0;j<=s;j++)
	{
		cout<<"*";	
	}
  	cout<<"|"<<endl;
  	
  	  k=k+0.0833;	
  }
  
}
	
	
	 
