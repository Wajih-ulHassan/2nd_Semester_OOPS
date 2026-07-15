#include <iostream>
using namespace std;

class BankAccount {
private:
    string name;
    double balance;

    // static interest rate shared by all accounts
    static double interestRate;

public:
    // Constructor
    BankAccount(string n, double b) {
        name = n;
        balance = b;
    }

    // Set interest rate (static change affects all objects)
    static void setInterestRate(double r) {
        interestRate = r;
    }

    // Display account info
    void display() {
        cout << "Name: " << name 
             << ", Balance: " << balance 
             << ", Interest Rate: " << interestRate << "%" << endl;
    }
};

// Initialize static variable
double BankAccount::interestRate = 5.0;

int main() {
    BankAccount a1("Waji", 9999);
    BankAccount a2("Zabi", 919191);

    cout << "Initial state:\n";
    a1.display();
    a2.display();

    cout << "\nChanging interest rate using a1...\n";
    a1.setInterestRate(7.5);  // changed via one object

    cout << "\nAfter change:\n";
    a1.display();
    a2.display();

    return 0;
}