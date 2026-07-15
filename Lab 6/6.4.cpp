#include <iostream>
using namespace std;

class Shape {
	public:
		virtual void calculateArea() {
			}
	};

class Circle : public Shape {
	private:
		float radius;

	public:
		Circle(float r) {
			radius = r;
			}

		void calculateArea() {
			cout<<"\n_______________Calculation Details_______________\n"<<endl;
			cout << "	Circle Area:	" << 3.14 * radius * radius << endl;
			}
	};

class Rectangle : public Shape {
	private:
		float length, width;

	public:
		Rectangle(float l, float w) {
			length = l;
			width = w;
			}

		void calculateArea() {
			cout << "	Rectangle Area:  " << length * width << endl;
			}
	};

int main() {
	Shape* s;

	Circle c(9);
	Rectangle r(4, 7);

	s = &c;
	s->calculateArea();

	s = &r;
	s->calculateArea();

	return 0;
	}