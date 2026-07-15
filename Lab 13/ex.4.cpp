#include <iostream>
using namespace std;

template <typename T>
class student {
	public:
		string name;
		static int count;
		student (string n): name(n) {
			count ++;
			}
	};
int student :: count =0;

int main() {
	student s1("Ali");
	student s2("Sara");
	student s3("Usman");

	cout<<"Total students"<<student::count<<endl;

	return 0;
	}