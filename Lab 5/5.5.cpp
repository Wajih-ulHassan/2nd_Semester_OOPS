#include <iostream>
using namespace std;

class Counter {
	private:
		int count;
	public:
		Counter() {
			count = 0;
			}

		Counter(int c) {
			count = c;
			}
		// Prefix ++
		Counter operator++() {
			Counter temp;
			count = count + 1;
			temp.count = count;
			return temp;
			}
		// Postfix ++
		Counter operator++(int) {
			Counter temp;
			temp.count = count;
			count = count + 1;
			return temp;
			}

		void display() {
			cout << "Count: " << count << endl;
			}
	};

int main() {
	Counter c1(5);

	cout << "Original value: ";
	c1.display();

	// Prefix
	cout << "\nAfter Prefix (++c1): ";
	++c1;
	c1.display();

	// Postfix
	cout << "After Postfix (c1++): ";
	Counter temp = c1++;
	temp.display();

	cout << "Value after Postfix increment: ";
	c1.display();

	return 0;
	}