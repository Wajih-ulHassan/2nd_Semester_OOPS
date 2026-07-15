#include <iostream>
using namespace std;
class Shape {
	public:
		void draw() {
			cout << "Drawing Shape" << endl;
			}
		void draw(string shapeName) {
			cout << "Drawing " << shapeName << endl;
			}
		void draw(int width, int height) {
			cout << "Width = " << width << endl;
			cout << "Height = " << height << endl;
			}
	};
int main() {
	Shape s;
	s.draw();
	s.draw("Circle");
	s.draw(23, 23);
	return 0;
	}