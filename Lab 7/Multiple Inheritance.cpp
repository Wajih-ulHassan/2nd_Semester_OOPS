#include <iostream>
using namespace std;
class Father {
	public:
		void showFather() {
			cout << "This is Father class" << endl;
			}
	};
class Mother {
	public:
		void showMother() {
			cout << "This is Mother class" << endl;
			}
	};
class Child : public Father, public Mother {
	public:
		void showChild() {
			cout << "This is Child class" << endl;
			}
	};
int main() {
	Child c;
	c.showFather();  // inherited from Father
	c.showMother();  // inherited from Mother
	c.showChild();   // Child class method
	return 0;
	}