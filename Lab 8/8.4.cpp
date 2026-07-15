#include <iostream>
using namespace std;

void doubleValue(int* ptr) {
	*ptr = *ptr * 2;
	}

int main() {
	int num = 99;
	cout << "Before: 	" << num << endl;
	doubleValue(&num);
	cout << "After:		" << num << endl;
	return 0;
	}