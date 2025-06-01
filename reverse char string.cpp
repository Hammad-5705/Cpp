#include<iostream>
#include<cstring>
using namespace std;
int main(){
	char c[100];
	cout<<"Enter String : ";
	cin.getline(c,100);
	
	int n=strlen(c);
	int j=n-1;
	for(int i=0;i<j;i++){
		swap(c[i],c[j]);
		j--;
		
	}
	cout<<c;
	return 0;
}
