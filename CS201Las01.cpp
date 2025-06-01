/*
Write a C++ program that calculates the total fee for a person based on the number of hours spent at the gym. 
According to the gym’s pricing policy, the first hour is free of charge, and a fee of Rs. 200 is applied for each additional hour thereafter.
*/

#include<iostream>
using namespace std;

int main()
{


//Prompt the user to enter the total number of hours they spent at the gym.
int hrs=0 ,fee=0;
cout<<"Enter the number of hours you spend at gym: ";
cin>>hrs;

//Validate the input using an if-else statement to ensure the number of hours is a positive integer.
if (hrs<0)
	cout<<"Invalid Input. Please enter a positive number of hours\n";
	
else{ 

//Use an if-else or switch statement to: Check whether the person stayed for only one hour (in which case the fee is Rs. 0), 
//or calculate the fee based on the number of additional hours beyond the first hour.
if(hrs==0 or hrs==1)
	fee=0;
	
else
	fee=200*(hrs-1);

//Finally, the program should display the total fee to the user.	
cout<<"Total gym usage fee: Rs. "<<fee;
}

return 0;

}
