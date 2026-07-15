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
			cout<<"\n_______________Employee Details_______________\n"<<endl;
			cout << "	Name:	" << name << endl;
			cout << "	Salary:	" << salary << endl;
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
			cout << "	Department:	" << department << endl;
			}
	};

class Executive : public Manager {
	public:
		void promote() {
			cout << "	Executive promoted!	" << endl;
			}
	};

int main() {
	Executive e;

	e.setData("Wajeeeeee", 	500);
	e.setDepartment("IT");

	e.displayInfo();
	e.showDepartment();
	e.promote();

	return 0;
	}