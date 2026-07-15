#include <iostream>
using namespace std;
class Person {
	public:
		void getName() {
			cout << "No Name Entered" << endl;
			}
		void getName(string firstName) {
			cout << "First Name: " << firstName << endl;
			}
		void getName(string firstName, string lastName) {
			cout << "Full Name: " << firstName << " " << lastName << endl;
			}
	};
int main() {
	Person s;
	s.getName();
	s.getName("Wajih");
	s.getName("Wajih", "Ul Hassan");
	return 0;
	}