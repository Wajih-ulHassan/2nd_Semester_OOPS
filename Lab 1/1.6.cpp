#include <iostream>
using namespace std;

class Studentclass {
	private:
		int rollnumber;
		float marks;

	public:
		void set(int r, float m) {
			rollnumber = r;
			marks = m;
			}
		void show() {
			cout<<"---------------Data using Class---------------"<<endl;
			cout<<"Class is private by default (needs public or user defined function)"<<endl;
			cout<<"Roll number: "<<rollnumber<<endl;
			cout<<"Marks: "<<marks<<endl;
			}
	};

struct Studentstruct {
	//public by deafult
	int Rollnumber;
	float Marks;
	};

int main() {
	Studentclass C1;
	C1.set(49, 76.6);
	C1.show();

	Studentstruct S1;
	S1 = {97, 78.4};
	cout<<"---------------Data using Structure---------------"<<endl;
	cout<<"Structure is publilc by default"<<endl;
	cout<<"Roll Number: "<<S1.Rollnumber<<endl;
	cout<<"Marks: "<<S1.Marks<<endl;
	}
