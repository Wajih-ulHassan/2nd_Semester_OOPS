#include <iostream>
using namespace std;

int main() {
	int age;

	cout << "Enter age: ";
	cin >> age;

	try {
		if (age < 0 || age > 120) {
			throw "Invalid age entered.";
			}

		cout << "Valid age." << endl;
		}
	catch (const char* message) {
		cout << "Error: " << message << endl;
		}

	return 0;
	}