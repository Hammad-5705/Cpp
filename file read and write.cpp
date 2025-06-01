#include<iostream>
#include<fstream>
#include<string>
using namespace std;
int main(){
	char txt[30]="Hello yh aik adad file h";
	string a;
	
	ofstream file;
	file.open("file.txt",ios::app);
	file<<txt<<"\n";
	file.close();
	
	ifstream mfile;
	mfile.open("file.txt");
	if(!mfile){
		cout<<"No file";
		exit(0);
	}
	else{
		while(getline(mfile,a)){
			cout<<a<<endl;
		}
		}
		
		mfile.close();
	
	return 0;
}
