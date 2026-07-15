#include <iostream>
using namespace std;
template <typename T>
void swapValues(T &a, T &b) {
    T temp = a;
    a = b;
    b = temp;
}
int main() { 
    int x = 72, y = 27;
    cout << "Before swap (int): x = " << x << ", y = " << y << endl;
    swapValues(x, y);
    cout << "After swap (int): x = " << x << ", y = " << y << endl;
    cout << endl;   
    double a = 5.0, b = 0.9;
    cout << "Before swap (double): a = " << a << ", b = " << b << endl;
    swapValues(a, b);
    cout << "After swap (double): a = " << a << ", b = " << b << endl;
    cout << endl; 
    string s1 = "Hehehe", s2 = "Hahaha";
    cout << "Before swap (string): s1 = " << s1 << ", s2 = " << s2 << endl;
    swapValues(s1, s2);
    cout << "After swap (string): s1 = " << s1 << ", s2 = " << s2 << endl;

    return 0;
}