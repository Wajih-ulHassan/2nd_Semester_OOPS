#include <iostream>
using namespace std;

class Student {
	public:
		int rollnumber;
		float marks;
	};

int main() {
	Student S1;
	S1 = {49, 76.3};

	cout<<"----------Data Before Update----------"<<endl;
	cout<<"Roll number : "<<S1.rollnumber<<endl;
	cout<<"Marks : "<<S1.marks<<endl;

	//Modifying values of Object Student
	//using Dot Operator
	S1.rollnumber = 97;
	S1.marks = 83.6;

	cout<<"----------Data After Update----------"<<endl;
	cout<<"Roll number : "<<S1.rollnumber<<endl;
	cout<<"Marks : "<<S1.marks<<endl;
	return 0;
	}