#include <iostream>
using namespace std;

int main() {
	int arr[] = {7, 14, 21, 28, 35};
	int* ptr = arr;

	cout << "Array elements using pointer:" << endl;
	for(int i = 0; i < 5; i++) {
		cout << *(ptr + i) << " ";
		}
	cout << endl;


	ptr = arr;
	cout << "\nUsing ptr++ " << endl;
	for(int i = 0; i < 5; i++) {
		cout << *ptr << " "<<endl;
		ptr++;
		}
	return 0;
	}