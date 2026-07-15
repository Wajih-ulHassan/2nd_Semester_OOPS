#include <iostream>
#include <cmath>
using namespace std;

class Shape {
	public:
		virtual float area() {
			return 0;
			}

		virtual float perimeter() {
			return 0;
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

		float area() {
			return length * width;
			}

		float perimeter() {
			return 2 * (length + width);
			}
	};

class Square : public Shape {
	private:
		float side;

	public:
		Square(float s) {
			side = s;
			}

		float area() {
			return side * side;
			}

		float perimeter() {
			return 4 * side;
			}
	};

class Triangle : public Shape {
	private:
		float a, b, c;

	public:
		Triangle(float x, float y, float z) {
			a = x;
			b = y;
			c = z;
			}

		float area() {
			float s = (a + b + c) / 2;
			float value = s * (s - a) * (s - b) * (s - c);

			if (value < 0) {
				return -1;
				}

			return sqrt(value);
			}

		float perimeter() {
			return a + b + c;
			}
	};

void showShape(Shape &s) {
	float a = s.area();

	if (a == -1) {
		cout << "Area: Not a Valid Triangle" << endl;
		}
	else {
		cout << "Area: " << a << endl;
		}

	cout << "Perimeter: " << s.perimeter() << endl;;
	}

int main() {
	Rectangle r(9, 4);
	Square s(8);
	Triangle t(7, 9, 2);

	cout << "__________Rectangle Data__________" << endl;
	showShape(r);

	cout << "__________Square Data__________" << endl;
	showShape(s);

	cout << "__________Triangle Data__________" << endl;
	showShape(t);

	return 0;
	}