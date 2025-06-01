#include<iostream>
using namespace std;
int main()
{
	int a,b;
	cout<<"Enter 4 digit number";
	cin>>a;
	
	if (!(999<a<10000))
	{
		cout<<"Invalid input";
		return 0;
	}
	
	else
	{
		b=a/1000;
		cout<<b;
		a=a%1000;
		
		b=a/100;
		cout<<b;
		a=a%100;
		
		b=a/10;
		cout<<b;
		a=a%10;
		
		b=a/1;
		cout<<b;
	
	}
	
	return 0;
}
