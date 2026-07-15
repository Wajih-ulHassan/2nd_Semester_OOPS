#include <iostream>
using namespace std;

class Calculator {
	public:
		float number1;
		float number2;

		Calculator(float a, float b) {
			number1 = a;
			number2 = b;
			}

		float add() {
			return number1 + number2;
			}

		float subtract() {
			return number1 - number2;
			}

		float multiply() {
			return number1 * number2;
			}

		float divide() {
			if(number2 != 0)
				return number1 / number2;
			else {
				cout<<"Error! Try again"<<endl;
				return 0;
				}
			}
	};

int main() {

	Calculator c1(10, 30);

	cout<<"\n ---------------MY CALCULATOR--------------- \n";

	cout<<"Addition:  "<<c1.add()<<endl;
	cout<<"Subtraction:  "<<c1.subtract()<<endl;
	cout<<"Mltiplication:  "<<c1.multiply()<<endl;
	cout<<"Division:  "<<c1.divide()<<endl;

	return 0;
	}