#include <iostream>
using namespace std;

class Citizen {
	public:
		string name;

	private:
		int age;

	protected:
		string cnic;

	public:
		void setData(string n, int a, string c) {
			name = n;
			age = a;
			cnic = c;
			}

		void display() {
			cout << "	Name:	" << name << endl;
			cout << "	Age:	" << age << endl;
			cout << "	CNIC:	" << cnic << endl;
			}
	};

class PakistaniCitizen : public Citizen {
	public:
		void showCNIC() {
			cout << "	CNIC (from derived):  " << cnic << endl;
			}
	};

int main() {
	PakistaniCitizen p;
	cout<<"\n_______________Citizen Information_______________\n"<<endl;
	p.setData("Ahmed", 20, "12345-6789012-3");

	cout << "	Name (public):	" << p.name << endl;
	p.showCNIC();	//protected from derived class
	p.display();	//show to all

	return 0;
	}