#include <iostream>
#include <string>
using namespace std;

template <typename T>
class Box {
	public:
		T value;

		Box(T v) : value(v) {}

		void display() {
			cout << "Value: " << value << endl;
			}
	};

int main() {
	Box<int> intBox(100);
	Box<double> dbBox(3.14);
	Box<string> strBox("OOP LAB");

	intBox.display();
	dbBox.display();
	strBox.display();

	return 0;
	}