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

class Cat : public Animal {
	public:
		void meow() {
			cout << "Meowing..." << endl;
			}
	};

int main() {
	Cat c;
	c.meow(); // Cat method
	c.eat();  // Inherited from Animal
	// c.bark(); // Compile-time error, Dog method not accessible
	return 0;
	}