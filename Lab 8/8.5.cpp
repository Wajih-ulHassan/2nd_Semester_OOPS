#include <iostream>
using namespace std;

int main() {
	int* ptr = new int;
	*ptr = 25;

	cout << "Dynamically allocated value \n	" << *ptr << endl;
	cout << "Address \n	" << ptr << endl;

	delete ptr;
	ptr = nullptr;
	return 0;
	}