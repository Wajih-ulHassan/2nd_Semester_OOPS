#include <iostream>
using namespace std;

int main() {
	int num = 10;
	int* ptr = &num;

	cout << "__________Variable Details___________\n" << endl;
	cout << "Value 	: " << num << endl;
	cout << "Address : " << &num << endl;
	cout << "Value in pointer (address): " << ptr<< endl;
	cout << "Value pointed by pointer: " << *ptr<< endl;

	return 0;
	}