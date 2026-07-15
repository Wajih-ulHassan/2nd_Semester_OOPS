#include <iostream>
using namespace std;

class BankAccount {
	private:
		int accnumber;
		string accHoldername;
		double balance;

	public:
		void setaccnumber(int accNO) {
			accnumber = accnumber;
			}

		void setaccHoldername(string name) {
			accHoldername = name;
			}

		void setbalance(double bal) {
			if(bal >= 0) {
				balance = bal;
				}
			else {
				cout<<"Balance can't be negative !!!"<<endl;
				}
			}

		int getaccnumber() {
			return accnumber;
			}

		string getaccHoldername() {
			return accHoldername;
			}

		double getbalance() {
			return balance;
			}
	};

int main() {
	BankAccount acc;

	cout<<"\n ____________BANK-ACCOUNT____________ \n\n";
	acc.setaccnumber(1324);
	acc.setaccHoldername("Wajih");
	acc.setbalance(-1000);
	acc.setbalance(40000);

	cout<<"Account Number: "<<acc.getaccnumber()<<endl;
	cout<<"Account Holder: "<<acc.getaccHoldername()<<endl;
	cout<<"Balance: "<<acc.getbalance()<<endl;

	return 0;
	}