#include <iostream>
using namespace std;

int main() {
	int age;

	cout << "Enter age: ";
	cin >> age;

	try {
		if (age < 0) {
			throw age;
			}
		else if (age > 120) {
			throw "Age is too high.";
			}

		cout << "Valid age." << endl;
		}
	catch (int value) {
		cout << "Age cannot be negative: " << value << endl;
		}
	catch (const char* message) {
		cout << "Error: " << message << endl;
		}

	return 0;
	}