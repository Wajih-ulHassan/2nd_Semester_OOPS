#include <iostream>
using namespace std;

class Student {
	private:
		string name;
		string subject;
		int marks;

	public:
		void setName( string n) {
			name = n;
			}

		void setSubject( string s) {
			subject = s;
			}

		void setMarks( int m) {
			if (m >= 0 && m <= 100) {
				marks = m;
				}
			else {
				cout<<"Marks must be between 0 and 100!"<<endl;
				}
			}

		string getName() {
			return name;
			}

		string getSubject() {
			return subject;
			}

		int getMarks() {
			return marks;
			}
	};

int main() {

	Student s1;

	cout<<"\n _______________STUDENT MARKS VALIDATION_______________ \n\n";
	s1.setName("Wajih");
	s1.setSubject("Object Oriented Programming");
	s1.setMarks(101);
	s1.setMarks(99);

	cout<<"Name: "<<s1.getName()<<endl;
	cout<<"Subject: "<<s1.getSubject()<<endl;
	cout<<"Marks: "<<s1.getMarks()<<endl;

	return 0;
	}
