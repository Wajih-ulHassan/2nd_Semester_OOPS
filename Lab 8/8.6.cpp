#include <iostream>
using namespace std;

int main() {
	int n = 5;
	int* arr = new int[n];

	cout << "Enter " << n << " numbers \n";
	for(int i = 0; i < n; i++) {
		cin >> arr[i];
		}

	int sum = 0;
	for(int i = 0; i < n; i++) {
		sum += arr[i];
		}

	cout << "Sum = " << sum << endl;

	delete[] arr;
	arr = nullptr;
	return 0;
	}