#include <iostream>
#include <string>   // string library
#include <cstdlib> // for atoi function
#include <sstream> // for stringstream

using namespace std;

class BankAccount {
private:
    string accountHolderName;  // Stores the account holder's name
    string accountNumber;      // Stores the account number VUID
    double balance;            // Stores the current balance

public:
    // Parameterized constructor to initialize account details
    BankAccount(string name, string accNumber, double initialBalance) {
        accountHolderName = name;
        accountNumber = accNumber;
        balance = initialBalance;
    }

    // Function to deposit money into the account
    void deposit(double amount) {
        if (amount > 0) {
            balance += amount;
            cout << "Depositing amount: " << amount << endl;
            cout << "Balance after deposit: " << balance << endl;
        } else {
            cout << "Invalid deposit amount!" << endl;
        }
    }

    // Function to withdraw money from the account
    void withdraw(double amount) {
        if (amount > balance) {
            cout << "Insufficient Balance" << endl;
        } else if (amount > 0) {
            balance -= amount;
            cout << "Withdrawing amount: " << amount << endl;
            cout << "Balance after withdrawal: " << balance << endl;
        } else {
            cout << "Invalid withdrawal amount!" << endl;
        }
    }

    // Function to display account details
    void displayDetails() {
        cout << "\n--- Account Summary ---" << endl;
        cout << "Account Holder: " << accountHolderName << endl;
        cout << "Account Number: " << accountNumber << endl;
        cout << "Current Balance: " << balance << endl;
    }

    // Function to extract first 4 digits from account number for withdrawal
    int getFirstFourDigits() {
        // Skip any non-digit characters at the beginning
        int start = 0;
        while (start < accountNumber.length() && !isdigit(accountNumber[start])) {
            start++;
        }
        
        string digits;
        for (int i = start; i < accountNumber.length() && digits.length() < 4; i++) {
            if (isdigit(accountNumber[i])) {
                digits += accountNumber[i];
            }
        }
        
        if (digits.empty()) return 0;
        
        // Convert string to integer using atoi
        return atoi(digits.substr(0, 4).c_str());
    }

    // Function to extract last 4 digits from account number for deposit
    int getLastFourDigits() {
        string digits;
        // Collect all digits from the account number using for loop
        for (size_t i = 0; i < accountNumber.length(); i++) {
            if (isdigit(accountNumber[i])) {
                digits += accountNumber[i];
            }
        }
        
        // Take the last 4 digits
        if (digits.length() >= 4) {
            return atoi(digits.substr(digits.length() - 4).c_str());
        }
        return atoi(digits.c_str()); // if less than 4 digits return what we have
    }
};

int main() {
	
	// Personal Information
	string name="Muhammad Hammad Nadeem";
	string VUID="BC240418173";
	int initial_balance=10000;
	
    // Create a bank account with hardcoded initial values
    BankAccount account(name, VUID, initial_balance);
    
    cout << "Account Created Successfully!" << endl;
    cout << "Account Holder Name: " << name << endl;
    cout << "Account Number (VUID): " << VUID << endl;
    cout << "Initial Balance: " << initial_balance << endl << endl;
    
    // Perform deposit operation using last 4 digits of VUID
    int depositAmount = account.getLastFourDigits();
    account.deposit(depositAmount);
    
    // Perform withdrawal operation using first 4 digits of VUID
    int withdrawalAmount = account.getFirstFourDigits();
    account.withdraw(withdrawalAmount);
    
    // Display account summary
    account.displayDetails();
    
    return 0;
}
