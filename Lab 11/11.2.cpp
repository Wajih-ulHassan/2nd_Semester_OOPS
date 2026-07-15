#include <iostream>
using namespace std;

class Vehicle {
	public:
		virtual void fuelType() = 0;
		virtual void speed() = 0;

		virtual ~Vehicle() {}
	};

class Car : public Vehicle {
	public:
		void fuelType() override {
			cout << "Car moves using petrol." << endl;
			}

		void speed() override {
			cout << "Car speed is 300km/h" << endl;
			}
	};

class Bicycle : public Vehicle {
	public:
		void fuelType() override {
			cout << "Bicycle does not use fuel." << endl;
			}

		void speed() override {
			cout << "Bicycle speed is 35 km/h." << endl;
			}
	};

int main() {
	Vehicle* v1 = new Car();
	Vehicle* v2 = new Bicycle();

	v1->fuelType();
	v1->speed();

	cout << endl;

	v2->fuelType();
	v2->speed();

	delete v1;
	delete v2;

	return 0;
	}