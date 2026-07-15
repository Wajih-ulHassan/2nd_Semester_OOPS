#include <iostream>
using namespace std;

class Vehicle {
	public:
		string brand;
		string model;

		void display_info() {
			cout << "	Brand: " << brand << endl;
			cout << "	Model: " << model << endl;
			}
	};

class Car : public Vehicle {
	public:
		string color;

		void display_info() {
			cout << "	Color: " << color << endl;
			Vehicle::display_info();
			}
	};

int main() {
	Car c1;

	c1.brand = "BMW";
	c1.model = "S9";
	c1.color = "GOLD";

	cout << "__________Car Details__________" << endl;
	c1.display_info();

	return 0;
	}