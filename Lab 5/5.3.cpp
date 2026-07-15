#include <iostream>
using namespace std;

class Multiply {
	private:
		int x, y;
	public:
		void setData(int a, int b) {
			x = a;
			y = b;
			}
		friend Multiply operator*(Multiply m1, Multiply m2);
		void display() {
			cout << "Result: " << x << " + " << y << "i" << endl;
			}
	};

Multiply operator*(Multiply m1, Multiply m2) {
	Multiply temp;
	temp.x = (m1.x * m2.x) - (m1.y * m2.y);
	temp.y = (m1.x * m2.y) + (m1.y * m2.x);
	return temp;
	}

int main() {
	Multiply m1, m2, m3;
	m1.setData(2, 3);
	m2.setData(1, 2);
	cout << "m1 = 2 + 3i, m2 = 1 + 2i" << endl;
	m3 = m1 * m2;
	m3.display();
	return 0;
	}