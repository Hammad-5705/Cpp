#include<iostream>
using namespace std;
int main(){
	int a=0;
	char c;
	
	do{
		cout<<"Guess number : ";
		cin>>c;
		
		if (!(c=='a'))
		{
			cout<<"try again\n";
			a+=1;
		}
		else
		{
			cout<<"You get it";
			break;
		}
	}
	while(a<5);
	
	return 0;
}
