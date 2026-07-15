#include <iostream>
using namespace std;

class Base {
	public:
		virtual ~Base() {
			cout << "This is Base Destructor" << endl;
			}
	};

class Derived : public Base {
	public:
		~Derived() {
			cout << "This is Derived Destructor" << endl;
			}
	};

int main() {
	Base* ptr = new Derived();

	delete ptr;

	return 0;
	}