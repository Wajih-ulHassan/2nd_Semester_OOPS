#include <iostream>
#include <string>
using namespace std;

class Student {
	public:
		string name;
		static int count;

		Student(string n) : name(n) {
			count++;
			}
	};

int Student::count = 0;

int main() {
	Student s1("dani");
	Student s2("yousaf");
	Student s3("srmd");

	cout << "Total students: " << Student::count << endl;

	return 0;
	}