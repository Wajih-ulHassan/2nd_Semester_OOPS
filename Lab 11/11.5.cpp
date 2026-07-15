#include <iostream>
using namespace std;

class Animal {
	public:
		virtual void describe() {
			cout << "Animaaaaaaaaaaaaaaaaaal" << endl;
			}
		virtual ~Animal() {}
	};
class Mammal : public Animal {
	public:
		void describe() override {
			cout << "Mammaaaaaaaaaaaaal" << endl;
			}
	};
class Dog : public Mammal {
	public:
		void describe() override {
			cout << "Dooooooooooooooooog" << endl;
			}
	};
int main() {
	Animal* ptr = new Dog();
	ptr->describe();
	delete ptr;
	return 0;
	}