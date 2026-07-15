#include <iostream>
using namespace std;

class Area {
	public:
		float length;
		float width;
	
		Area() {
			length = 0;
			width = 0;
			}

		Area(float l) {
			length = l;
			width = l;
			}

		Area(float l, float w) {
			length = l;
			width = w;
			}

		float calculateArea() {
			return length * width;
			}
	};

int main() {

	Area a1;
	Area a2(9);
	Area a3(8, 3);

	cout<<"\n__________AREA__________\n";
	cout<<"\nArea 1: "<<a1.calculateArea()<<endl;
	cout<<"Area 2: "<<a2.calculateArea()<<endl;
	cout<<"Area 3: "<<a3.calculateArea()<<endl;

	return 0;
	}