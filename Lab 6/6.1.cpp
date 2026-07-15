#include <iostream>
using namespace std;

class Vehicle {
	private:
		string model;
		int year;

	public:
		void setDetails(string m, int y) {
			model = m;
			year = y;
			}

		void displayDetails() {
			cout<<"\n_______________Car Details_______________\n"<<endl;
			cout << "	Model:	" << model<< endl;
			cout << "	Year:	" << year << endl;
			}
	};

class Car : public Vehicle {
	public:
		void startEngine() {
			cout << "\nCar engine started.\n" << endl;
			}
	};

int main() {
	Car c;

	c.setDetails("KIWI", 2070);
	c.displayDetails();
	c.startEngine();

	return 0;
	}