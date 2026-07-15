#include <iostream>
using namespace std;

class BankAccount {
	protected:
		double amount;

	public:
		BankAccount(double a) {
			amount = a;
			}

		virtual double calInt() {
			return 0;
			}

		virtual ~BankAccount() {}
	};

class SavingsAcc : public BankAccount {
	public:
		SavingsAcc(double a) : BankAccount(a) {}

		double calInt() override {
			return amount * 0.25;
			}
	};

class FixedDeposit : public BankAccount {
	public:
		FixedDeposit(double a) : BankAccount(a) {}

		double calInt() override {
			return amount * 0.29;
			}
	};

int main() {
	BankAccount* accc1 = new SavingsAcc(22000);
	BankAccount* accc2 = new FixedDeposit(7833);

	cout << "Savings Account Interest = "
	     << accc1->calInt() << endl;

	cout << "Fixed Deposit Interest = "
	     << accc2->calInt() << endl;

	delete accc1;
	delete accc2;

	return 0;
	}