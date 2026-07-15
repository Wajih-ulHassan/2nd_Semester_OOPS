#include <iostream>
using namespace std;
class Shape {
	public:
		virtual void draw() = 0;
	};
class Circle : public Shape {
	public:
		void draw() {
			cout << "Drawing Circle" << endl;
			}
	};
class Square : public Shape {
	public:
		void draw() {
			cout << "Drawing Square" << endl;
			}
	};
class Triangle : public Shape {
	public:
		void draw() {
			cout << "Drawing Triangle" << endl;
			}
	};
int main() {
	Shape* i;
	Circle gola;
	Square choras;
	Triangle tikona;
	i = &gola;
	i->draw();
	i = &choras;
	i->draw();
	i = &tikona;
	i->draw();
	return 0;
	}