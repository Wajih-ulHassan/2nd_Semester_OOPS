#include <iostream>
#include <string>
using namespace std;

template <typename T1, typename T2>
class Pair {
private:
    T1 first;
    T2 second;
public:
    Pair(T1 f, T2 s) {
        first = f;
        second = s;
    }
    void display() {
        cout << "First: " << first << ", Second: " << second << endl;
    }
};
int main() {
    Pair<int, double> p1(10, 3.14);
    p1.display();
    Pair<string, int> p2("ROLL NO", 49);
    p2.display();
    Pair<string, string> p3("WAJIH UL", "HASSAN");
    p3.display();

    return 0;
}