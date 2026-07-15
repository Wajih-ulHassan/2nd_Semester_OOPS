#include <iostream>
using namespace std;

int main() {
	int num = 7;
	int* ptr = &num;
	int** ptr2 = &ptr;

	cout << "Value of num: " << num << endl;
	cout << "Using single pointer: " << *ptr << endl;
	cout << "Using double pointer: " << **ptr2 << endl;

	return 0;
	}
