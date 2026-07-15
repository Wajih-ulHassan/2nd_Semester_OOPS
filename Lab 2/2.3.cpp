#include <iostream>
using namespace std;

class Rectangle {
	private:
		double length;
		double width;

	public:
		void input();
		double area() const;
		void display() const;
	};

void Rectangle::input() {
	cout<<"Enter Length: ";
	cin>>length;

	cout<<"Enter Width: ";
	cin>>width;
	}

double Rectangle::area()const {
	return length*width;
	}

void Rectangle::display() const {
	cout<<"Length: "<<length<<endl;
	cout<<"Width: "<<width<<endl;
	cout<<"Area: "<<area()<<endl;
	}

//Comparing two rectangles
Rectangle largerRectangle(const Rectangle &r1, const Rectangle &r2) {
	if(r1.area() >= r2.area()) {
		return r1;
		}
	else {
		return r2;
		}
	}

int main() {
	Rectangle r1,r2;

	cout<<"----------Enter details for Rectangle 1---------- \n";
	r1.input();
	cout<<"\n--------------------------------------------------\n";

	cout<<"\n----------Enter deatils for Rectangle 2---------- \n";
	r2.input();
cout<<"\n--------------------------------------------------\n";
	Rectangle bigger = largerRectangle(r1,r2);

	cout<<"\n----------Rectangle with larger area----------\n";
	bigger.display();

	return 0;
	}
