#include <iostream>
using namespace std;

class Student {
	public:
		string name;
		int rollNo;

		Student(string n, int r) {
			name = n;
			rollNo = r;
			}

		Student(const Student &s) {
			name = s.name;
			rollNo = s.rollNo;
			}

		void display() {
			cout<<"Name:  "<<name<<endl;
			cout<<"Roll Number:  "<<rollNo<<endl;
			}
	};

int main() {

	Student s1("Wajih Ul Hassan", 49);
	Student s2 = s1;

	cout<<"\n____________STUDENTS DATA____________\n";
	cout<<"\nStudent 1:  "<<endl;
	s1.display();
	cout<<endl;

	cout<<"\nStudent 2:  "<<endl;
	s2.display();

	return 0;
	}