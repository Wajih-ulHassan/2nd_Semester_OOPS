#include <iostream>
using namespace std;

class Number {
	private:
		int value;
	public:
		void setValue(int v) {
			value = v;
			}
		Number operator-(Number n) {
			Number temp;
			temp.value = value - n.value;
			return temp;
			}
		void display() {
			cout << "Value: " << value << endl;
			}
	};

int main() {
	Number n1, n2, n3;
	n1.setValue(20);
	n2.setValue(8);
	cout << "n1 = ";
	n1.display();
	cout << "n2 = ";
	n2.display();
	n3 = n1 - n2;
	cout << "n1 - n2 = ";
	n3.display();
	return 0;
	}