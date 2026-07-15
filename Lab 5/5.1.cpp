#include <iostream>
using namespace std;

class Complex {
	private:
		int real, imag;
	public:
		void setData(int r, int i) {
			real = r;
			imag = i;
			}
		Complex operator+ (Complex c) {
			Complex temp;
			temp.real= real + c.real;
			temp.imag= imag + c.imag;
			return temp;
			}

		void display() {
			cout<<real<<" + "<<imag<<" i "<<endl;

			}
	};

int main() {
	Complex c1,c2,c3;
	c1.setData(4,3);
	c2.setData(7,3);
	cout<<"c1 = ";
	c1.display();
	cout<<"c2 = ";
	c2.display();
	c3 = c1 + c2;
	cout<<"c1 + c2 = ";
	c3.display();
	return 0;
	}