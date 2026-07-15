#include <iostream>
using namespace std;

class Employee {
	private:
		string name;
		int salary;

	public:
		void setData(string n, int s) {
			name = n;
			salary = s;
			}

		void displayInfo() {
			cout<<"__________Employee Details__________\n";
			cout << "Name: " << name << endl;
			cout << "Salary: " << salary << endl;
			}
	};

class Manager : public Employee {
	protected:
		string department;

	public:
		void setDepartment(string d) {
			department = d;
			}

		void showDepartment() {
			cout << "Department: " << department << endl;
			}
	};

class Executive : public Manager {
	public:
		void promote() {
			cout << "Executive Promotion Granted!" << endl;
			}
	};

int main() {
	Executive e1;

	e1.setData("sara", 100000);
	e1.setDepartment("Reproduction Line");

	e1.displayInfo();
	e1.showDepartment();
	e1.promote();

	return 0;
	}