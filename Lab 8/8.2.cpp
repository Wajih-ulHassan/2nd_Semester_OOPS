#include <iostream>
using namespace std;

void swap(int* x, int* y) {
	int temp = *x;
	*x = *y;
	*y = temp;
	}

int main() {
	int a = 2, b = 5;
	cout << "_____Before swap_____\n";
	cout<< " a= " << a << endl;
	cout<< " b= " << b << endl;
	swap(&a, &b);
	cout << "_____After swap_____\n";
	cout<< " a= " << b << endl;
	cout<< " b= " << b << endl;
	return 0;
	}