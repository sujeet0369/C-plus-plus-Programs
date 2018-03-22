#include<iostream>
#include<iomanip>
int main(void)
{
	int n,i,j=0;
	std::cout<<"Enter the no. of lines: ";
	std::cin>>n;
	for(i=1;i<=n;i++)
	{
		std::cout<<std::setw(n-i+2);
		for(j=1;j<=i;j++)
		{
					std::cout<<"* ";
		}
		std::cout<<"\n";
	}
	return 0;
}
