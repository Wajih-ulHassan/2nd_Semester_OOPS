#include <iostream>
using namespace std;
class Polygon {
	public:
		virtual void displayResult() {
			cout << "Area Calculation" << endl;
			}
	};
class Rectangle : public Polygon {
	public:
		float width, height;
		Rectangle(float w, float h) {
			width = w;
			height = h;
			}
		void displayResult() {
			float area = width * height;
			cout << "Area of Rectangle = " << area << endl;
			}
	};
class Triangle : public Polygon {
	public:
		int width, height;
		Triangle(float w, float h) {
			width = w;
			height = h;
			}
		void displayResult() {
			int area = (width * height) / 2;
			cout << "Area of Triangle = " << area << endl;
			}
	};
int main() {
	Polygon* r;
	Rectangle a(10.2, 5.5);
	Triangle t(5.34, 7.23);
	r = &a;
	r->displayResult();
	r = &t;
	r->displayResult();
	return 0;
	}