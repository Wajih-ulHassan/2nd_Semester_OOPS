#include <iostream>
using namespace std;

class Shape {
	protected:
		string color;

	public:
		Shape(string c) {
			color = c;
			}
	};

class Circle : public Shape {
	private:
		float radius;

	public:
		Circle(string c, float r) : Shape(c) {
			radius = r;
			}

		void display() {
			cout<<"\n_______________Shape Details_______________\n"<<endl;
			cout << "	Circle Color:	" << color << endl;
			cout << "	Radius:	" << radius << endl;
			}
	};

class Rectangle : public Shape {
	private:
		float length, width;

	public:
		Rectangle(string c, float l, float w) : Shape(c) {
			length = l;
			width = w;
			}

		void display() {
			cout << "	Rectangle Color:  " << color << endl;
			cout << "	Length:	" << length << endl;
			cout << "	Width:	" << width << endl;
			}
	};

int main() {
	Circle c("Red", 5);
	Rectangle r("Blue", 4, 6);

	c.display();
	cout << endl;
	r.display();

	return 0;
	}