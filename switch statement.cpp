#include<iostream>
using namespace std;
int main(){
	int a=100;
	switch (a%2)
	{
	
		case 0:
			{
				cout<<"Even";
				break;
			}
		case 1:
			{
				cout<<"odd";
				break;
			}
		default:
			{
				cout<<"Invalid";
				break;
			}
	} 
		return 0;
}
