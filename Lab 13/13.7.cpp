#include <iostream>
using namespace std;
template <typename T>
class Counter {
	private:
		static int count;
	public:
		Counter() {
			count++;
			}
		static void showCount() {
			cout << "Objects created of this type: " << count << endl;
			}};
template <typename T>
int Counter<T>::count = 0;
int main() {
	Counter<int> a1;
	Counter<int> a2;
	Counter<double> b1;
	Counter<string> c1;
	Counter<string> c2;
	Counter<string> c3;
	cout << "Int type: ";
	Counter<int>::showCount();
	cout << "Double type: ";
	Counter<double>::showCount();
	cout << "String type: ";
	Counter<string>::showCount();
	return 0;
	}