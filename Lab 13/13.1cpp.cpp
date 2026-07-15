#include <iostream>
#include <string>
using namespace std;

template <typename T>
void mySwap(T &x, T &y) {
	T tmp = x;
	x = y;
	y = tmp;
	}

int main_swap() {
	int a = 11, b = 99;
	mySwap(a, b);
	cout << "ints: " << a << " " << b << '\n';

	double p = 1.23, q = 9.87;
	mySwap(p, q);
	cout << "doubles: " << p << " " << q << '\n';

	string s1 = "alpha", s2 = "omega";
	mySwap(s1, s2);
	cout << "strings: " << s1 << " " << s2 << '\n';

	return 0;
	}