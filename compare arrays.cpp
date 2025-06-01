#include<iostream>
#include<stdlib.h>
using namespace std;
int main(){
	int a[5],b[5],count=0;
	for(int i=0;i<5;i++){
		a[i]=rand();
		b[i]=rand();
	}
	
	for(int i=0;i<5;i++){
		cout<<a[i]<<"\t";
	}
	cout<<endl; 
	for(int i=0;i<5;i++){
		cout<<b[i]<<"\t";
	}
	cout<<endl;
	for(int i=0;i<=5;i++){
		if(a[i]==b[i]){
			count=count+1;
		}
	}
	
	if(count>0){
		if (count==5){
			cout<<"\nArrays are equal";
		}
		else{
			cout<<endl<<count<<"values of arrays are similar";
		}
	}
	else{
		cout<<"\nArrays are not similar";
	}
}
