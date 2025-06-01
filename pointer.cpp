#include<iostream>
using namespace std;
void convert(char *c){
	while(*c != '\0'){
		if(islower(*c)){
			*c=toupper(*c);		
	}
	c++;
	}
}
int main(){
	char c[30]={"Welcome to pakistan"};
	convert(c);
	cout<<c;
	return 0;
}
