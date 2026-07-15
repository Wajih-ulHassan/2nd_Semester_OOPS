#include <iostream>
using namespace std;

class Student {
	private:
		int rollnumber;
		float marks;

	public:
		void input();
		void display() const;
		float getMarks()const;
	};
void Student :: input() {
	cout<<"Enter  Rollnumber: ";
	cin>>rollnumber;

	cout<<"Enter marks: ";
	cin>>marks;
	}

void Student::display() const {
	cout<<"Rollnumber: "<<rollnumber<<endl;
	cout<<"Marks: "<<marks<<endl;
	}

float Student::getMarks() const {
	return marks;
	}

int main() {
	Student s[5];
	cout<<"---------------Enter data for 5 students---------------\n";
	for(int i=0; i<5; i++) {
		cout<<"\nStudent "<<i+1<<":\n";
		s[i].input();
		}

	int maxIndex = 0;
	for(int i=1; i<5; i++) {
		if(s[i].getMarks() > s[maxIndex].getMarks()) {
			maxIndex = i;
			}
		}

	cout<<"\n-----Student with highest marks-----\n";
	s[maxIndex].display();
	return 0;
	}