#include<iostream>
#include<conio.h>
#include<string.h>
using namespace std;
int main(void)
{
	char str1[300],str2[300],concat[600];
	char ch;
	cout<<"enter the string one :" <<endl;
    gets(str1);
    cout<<"enter the string two :"<<endl;
    gets(str2);
    cout<<"your entered two strins are :"<<endl;
	cout<<"1.";
	puts(str1);
	cout<<endl<<"2." ;puts(str2);
 int m,n,i,k;
 m=strlen(str1);
 n=strlen(str2);
 i=0;
 while((str1[i]!='\0')&&i<m)
  {
 concat[i]=str1[i];
 i++;
	 }
	 concat[i]=' ';
	 for( i=i+1,k=0;i>m ,k<n;i++,k++)
	 {
	 	concat[i]=str2[k];
	 }
 cout<<endl<<"the concated strings is:";
 puts(concat);
	return 0;
}

