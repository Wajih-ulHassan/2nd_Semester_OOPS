#include <iostream>
using namespace std;

class Student {
	public:
		int rollnumber;
		float marks;
	};

int main() {
	Student students[3] = {
			{49, 76.6},
			{97, 76.3},
			{11, 73.8}
		};

	cout<<"------------Student Records------------"<<endl;
	for(int i=0; i<3; i++) {
		cout<<"Roll number: "<<students[i].rollnumber<<endl;
		cout<<"Marks: "<<students[i].marks<<endl;
		}
	return 0;
	}