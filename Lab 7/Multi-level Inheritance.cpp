#include <iostream>
using namespace std;
class Animal {
	public:
		void eat() {
			cout << "Eating..." << endl;
			}
	};
class Dog : public Animal {
	public:
		void bark() {
			cout << "Barking..." << endl;
			}
	};
class BabyDog : public Dog {

	public:
		void weep() {
			cout << "Weeping..." << endl;
			}
	};
int main() {
	BabyDog d;
	d.weep();  // Derived class method
	d.bark();  // Inherited from Dog
	d.eat();   // Inherited from Animal
	return 0;
	}