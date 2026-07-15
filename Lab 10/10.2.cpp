#include <iostream>
using namespace std;
class BankAccount {
	protected:
		double balance;
	public:
		BankAccount() {
			balance = 0;
			}
		virtual void deposit(double amount) = 0;
		virtual void withdraw(double amount) = 0;
		virtual double getBalance() = 0;
	};
class SavingsAccount : public BankAccount {
	public:
		void deposit(double amount) {
			balance = balance + amount;
			cout << "Amount Deposited: " << amount << endl;
			}
		void withdraw(double amount) {
			if (amount <= balance) {
				balance = balance - amount;
				cout << "Amount Withdrawn: " << amount << endl;
				}
			else {
				cout << "Insufficient Balance" << endl;
				}
			}
		double getBalance() {
			return balance;
			}
		void applyInterest() {
			double sood = balance * 0.10;
			balance = balance + sood;
			cout << "Interest Added: " << sood << endl;
			}
	};
class CheckingAccount : public BankAccount {
	private:
		int lenDen;
	public:
		CheckingAccount() {
			lenDen = 0;
			}
		void deposit(double amount) {
			balance = balance + amount;
			lenDen++;
			cout << "Amount Deposited: " << amount << endl;
			}
		void withdraw(double amount) {
			if (amount <= balance) {
				balance = balance - amount;
				lenDen++;
				cout << "Amount Withdrawn: " << amount << endl;
				}
			else {
				cout << "Insufficient Balance" << endl;
				}
			}
		double getBalance() {
			return balance;
			}
		void deductTransactionFee() {
			if (lenDen > 3) {
				balance = balance - 50;
				cout << "Transaction Fee Deducted" << endl;
				}
			else {
				cout << "No Transaction Fee" << endl;
				}
			}
	};
int main() {
	SavingsAccount bachat;
	bachat.deposit(975);
	bachat.withdraw(333);
	bachat.applyInterest();
	cout << "Savings Balance: " << bachat.getBalance() << endl;
	cout << endl;
	CheckingAccount current;
	current.deposit(173);
	current.withdraw(93);
	current.deposit(777);
	current.withdraw(90);
	current.deductTransactionFee();
	cout << "Checking Balance: " << current.getBalance() << endl;
	return 0;
	}