#include<iostream>
using namespace std;
int main()
{
//You are required to Hard-Code your own name and VU ID (e.g., BS123456789) & display it afterwards
cout<<"Name:\tMuhammad Hammad Nadeem\n";
cout<<"VU-ID:\tbc240418173\n\n";


//Now, you have to ask a user to enter the numeric part of VU ID
int id;
cout<<"Enter Numeric Part Of VU-ID:  ";
cin>>id;


//Extract and display 5 digits from the middle of the numeric part asked in the above step
int n_id=id/100;
n_id=n_id%10000;


//Digit 1 should be used for the quantity of Burger.
int burger=n_id/10000;


//Digit 2 should be used for the quantity of Pizza.
n_id=n_id%10000;
int pizza=n_id/1000;


//Digit 3 should be used for the quantity of Fries.
n_id=n_id%1000;
int fries=n_id/100;


//Digit 4 should be used for the quantity of Sandwich.
n_id=n_id%100;
int sandwich=n_id/10;

//Digit 5 should be used for the quantity of Cold Drink.
n_id=n_id%10;
int cold_drink=n_id;


//The price of each menu item should be the same as shown in the sample output screenshot below.
int b=250;
int p=500;
int f=150;
int s=200;
int cd=100;

//Multiply each menu item price by its designated quantity to calculate the total bill.
int bb=burger*b;
int bp=pizza*p;
int bf=fries*f;
int bs=sandwich*s;
int bcd=cold_drink*cd; 

/*
Display the full billing details for each item including:
Item name
Quantity (from digit)
Unit price
Subtotal (quantity � price)
Sample is shown in screenshot
*/
cout<<"\n\n";
cout<<"===WELCOME TO C++ CAFE===\n";
cout<<"----MENU----\n";
cout<<"1. Burger\t Rs. "<<b<<endl;
cout<<"2. Pizza\t Rs. "<<p<<endl;
cout<<"3. Fries\t Rs. "<<f<<endl;
cout<<"4. Sandwich\t Rs. "<<s<<endl;
cout<<"5. Cold Drink\t Rs. "<<cd<<endl;

cout<<"\n\n";


cout<<"Burgers ("<<burger<<" X Rs."<<b<<") = Rs. "<<bb<<endl;
cout<<"Pizza ("<<pizza<<" X Rs."<<p<<") = Rs. "<<bp<<endl;
cout<<"Fries ("<<fries<<" X Rs."<<f<<") = Rs. "<<bf<<endl;
cout<<"Sandwich ("<<sandwich<<" X Rs."<<s<<") = Rs. "<<bs<<endl;
cout<<"Cold Drink ("<<cold_drink<<" X Rs."<<cd<<") = Rs. "<<bcd<<endl;

//After processing all 5 items, calculate the total bill.
int total_bill=bb+bp+bf+bs+bcd , final_bill=0, discount=0;

//If the total bill is greater than or equal to Rs. 5000, apply a 10% discount.
if (total_bill>=5000)
{
	cout<<"Surprics! You\'ve unlocked a 10% discount"<<endl;
	discount=(total_bill*10)/100;
	final_bill=total_bill-discount;
	
}
else
	final_bill=total_bill;
	
		
//Display the following at the end
cout<<"\n\n";
cout<<"==== Final Bill ====\n";
cout<<"Total before Discount : "<<total_bill<<endl;
cout<<"Discount : "<<discount<<endl;
cout<<"Net Payable Amount : "<<final_bill<<endl;

cout<<"\n\nThanks For Visiting C++ Cafe";

return 0;
}
