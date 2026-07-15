#include <iostream>
using namespace std;

class Counter {
private:
    int count;
public:
    Counter() : count(0) {}
    Counter(int c) : count(c) {}
    
    // Prefix ++ (pre-increment)
    Counter operator++() {
        ++count;
        return *this;
    }
    
    // Postfix ++ (post-increment)
    Counter operator++(int) {
        Counter temp = *this;
        ++count;
        return temp;
    }
    
    void display() {
        cout << "Count: " << count << endl;
    }
};

int main() {
    Counter c1(5), c2(10);
    
    cout << "Original values:" << endl;
    cout << "c1 = "; c1.display();
    cout << "c2 = "; c2.display();
    
    cout << "\nPrefix ++c1: ";
    ++c1;
    c1.display();
    
    cout << "Postfix c2++: ";
    Counter temp = c2++;
    temp.display();
    cout << "c2 after c2++: ";
    c2.display();
    
    return 0;
}