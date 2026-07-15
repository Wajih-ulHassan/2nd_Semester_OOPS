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
	cout<<"Roll number :"<<S1.rollnumber<<endl;
	cout<<"Marks :"<<S1.marks<<endl;
	return 0;
	}