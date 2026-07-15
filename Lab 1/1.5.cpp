#include <iostream>
using namespace std;

class Student {
		public:
		int rollnumber;
		float marks;

		//user defined function
		void display() {
			cout<<"Roll number: "<<rollnumber<<endl;
			cout<<"Marks: "<<marks<<endl;
			}
	};

int main() {
	Student S1;
	S1 = {49, 76.6};
	//calling function in main
	S1.display();
	return 0;
	}