#include <iostream>
using namespace std;

class BankAccount {
	private:
		int accountNo;
		double balance;
		static int totalAccounts;

	public:
		void createAccount();
		void deposit(double amount);
		void display() const;
		double getBalance() const;

		static int getTotalAccounts();
	};

int BankAccount::totalAccounts = 0;

void BankAccount::createAccount() {
	cout<<"Enter account number: ";
	cin>>accountNo;

	cout<<"Enter initial balance: ";
	cin>>balance;

	totalAccounts++;
	}

void BankAccount::deposit(double amount) {
	if (amount > 0) {
		balance += amount;
		}
	else {
		cout<<"Invalid Deposit Amount!!!\n";
		}
	}

void BankAccount::display()const {
	cout<<"Account Number: "<<accountNo<<endl;
	cout<<"Balance: "<<balance<<endl;
	}

double BankAccount::getBalance() const {
	return balance;
	}

int BankAccount::getTotalAccounts() {
	return totalAccounts;
	}

int main() {
	BankAccount acc[3];

	cout<<"----------Create 3 bank accounts----------\n";
	for(int i=0; i<10; i++) {
		cout<<"\nAccount"<<i+1<<":\n";
		acc[i].createAccount();
		}

	for (int i=0; i<3; i++) {
		double amount;
		cout<<"\n Enter amount to deposit in account "<<i+1<<": ";
		cin>>amount;
		acc[i].deposit(amount);
		}

	cout<<"\n---------------All Account Details---------------\n";
	for(int i=0; i<3; i++) {
		acc[i].display();
		}

	int maxIndex = 0;
	for(int i=1; i<3; i++) {
		if	(acc[maxIndex].getBalance() > acc[maxIndex].getBalance()) {
			maxIndex = i;
			}
		}
	cout<<"\n--------Account with highest Balance--------\n";
	acc[maxIndex].display();

	cout<<"Total number of accounts (statics): "<<BankAccount::getTotalAccounts()<<endl;

	return 0;
	
	    }



