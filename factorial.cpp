#include<iostream>
using namespace std;
int main()
{
	long a,f=1;
	cout<<"Enter num to get factorial : ";
	cin>>a;
	
	while(a>0)
		{
		  f=f*a;
		  a-=1;	
		}
		
	cout<<f;
	return 0;
		
}
