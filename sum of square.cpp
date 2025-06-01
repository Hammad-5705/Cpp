#include<iostream>
using namespace std;
int main(){
	int a,r=0;
	cout<<"Enter number to find sum of square : ";
	cin>>a;
	for(int i=1;i<=a;i++){
		r=r+i*i;
	}
	cout<<r;
	return 0;
}
