#include <iostream>
#include <exception>
using namespace std;

class InvalidAgeException : public exception {
	public:
		const char* what() const noexcept override {
			return "Invalid age entered.";
			}
	};

int main() {
	int age;

	cout << "Enter age: ";
	cin >> age;

	try {
		if (age < 0 || age > 120) {
			throw InvalidAgeException();
			}

		cout << "Valid age." << endl;
		}
	catch (const InvalidAgeException& e) {
		cout << "Error: " << e.what() << endl;
		}

	return 0;
	}