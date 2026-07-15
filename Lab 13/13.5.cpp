#include <iostream>
using namespace std;
class Calculator {
	private:
		Calculator() {}
	public:
		static double add(double a, double b) {
			return a + b;
			}
		static double subtract(double a, double b) {
			return a - b;
			}
		static double multiply(double a, double b) {
			return a * b;
			}
		static double divide(double a, double b) {
			if (b == 0) {
				cout << "Error: Division by zero!" << endl;
				return 0;
				}
			return a / b;
			}
	};
int main() {
	cout << "Addition: " << Calculator::add(11111, 5555555) << endl;
	cout << "Subtraction: " << Calculator::subtract(22222, 99999) << endl;
	cout << "Multiplication: " << Calculator::multiply(12222, 222222) << endl;
	cout << "Division: " << Calculator::divide(777777, 33333) << endl;
	return 0;
	}