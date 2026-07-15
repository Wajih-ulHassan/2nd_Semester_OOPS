#include <iostream>
#include <string>
using namespace std;

template <class T1, class T2, class T3>
class Record {
	public:
		T1 studentName;
		T2 studentAge;
		T3 gPa;

		Record(T1 n, T2 a, T3 g) {
			studentName = n;
			studentAge = a;
			gPa = g;
			}

		void showData() {
			cout << "Student Name: " << studentName << endl;
			cout << "Student Age: " << studentAge << endl;
			cout << "GPA: " << gPa<< endl;

			}
	};

int main() {
	Record<string, int, float> r1("waji", 19, 3.45);
	Record<string, int, double> r2("wajee", 21, 3.82);

	r1.showData();
	r2.showData();

	return 0;
	}