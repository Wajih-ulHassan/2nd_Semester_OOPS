#include <iostream>
using namespace std;

class vehicle {
	public:
		string brand;
		string model;
		int year;

		vehicle() {
			brand = "Unidentified";
			model = "Unidentified";
			year = 0;
			cout<<"Default Constructor is called"<<endl;
			}

		vehicle (string b, string m, int y): vehicle() {
			brand = b;
			model = m;
			year = y;
			cout<<"Parameterized Constructor is called"<<endl;
			}

		void display() {
			cout<<"\n ----------Vehicle Data---------- \n";
			cout<< "\nBrand: "<<brand<<endl;
			cout<< "Model: "<<model<<endl;
			cout<< "Year: "<<year<<endl;
			}
	};

int main() {
	vehicle V1;
	V1.display();

	cout<<endl;

	vehicle V2("Toyota", "BMW", 2000);
	V2.display();

	return 0;
	}
