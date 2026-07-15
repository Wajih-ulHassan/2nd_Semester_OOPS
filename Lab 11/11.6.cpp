#include <iostream>
using namespace std;

class Shape {
	public:
		virtual double area() = 0;
		virtual double perimeter() = 0;

		virtual ~Shape() {}
	};

class Rectangle : public Shape {
		double length, width;

	public:
		Rectangle(double l, double w) {
			length = l;
			width = w;
			}

		double area() override {
			return length * width;
			}

		double perimeter() override {
			return 2 * (length + width);
			}
	};

class Circle : public Shape {
		double radius;

	public:
		Circle(double r) {
			radius = r;
			}

		double area() override {
			return 3.14 * radius * radius;
			}

		double perimeter() override {
			return 2 * 3.14 * radius;
			}
	};

class Triangle : public Shape {
		double base, height;

	public:
		Triangle(double b, double h) {
			base = b;
			height = h;
			}

		double area() override {
			return 0.5 * base * height;
			}

		double perimeter() override {
			return base + height + 10;
			}
	};

int main() {
	Shape* shapes[3];

	shapes[0] = new Rectangle(22.2, 34.3);
	shapes[1] = new Circle(32.1);
	shapes[2] = new Triangle(64.1, 33.4);

	for(int i = 0; i < 3; i++) {
		cout << "Area = "
		     << shapes[i]->area()
		     << " , Perimeter = "
		     << shapes[i]->perimeter()
		     << endl;
		}

	for(int i = 0; i < 3; i++) {
		delete shapes[i];
		}

	return 0;
	}