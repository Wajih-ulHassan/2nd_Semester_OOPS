#include <iostream>
using namespace std;

class Animal {
	public:
		virtual void sound() {
			cout << "Animal makes a sound." << endl;
			}

		virtual ~Animal() {}
	};

class Dog : public Animal {
	public:
		void sound() override {
			cout << "bark bark" << endl;
			}
	};

class Cat : public Animal {
	public:
		void sound() override {
			cout << "meow meow" << endl;
			}
	};

class Bird : public Animal {
	public:
		void sound() override {
			cout << "chirp chirp" << endl;
			}
	};

int main() {
	Animal* animals[3];

	animals[0] = new Dog();
	animals[1] = new Cat();
	animals[2] = new Bird();

	for(int i = 0; i < 3; i++) {
		animals[i]->sound();
		}

	for(int i = 0; i < 3; i++) {
		delete animals[i];
		}

	return 0;
	}