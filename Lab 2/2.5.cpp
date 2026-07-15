#include <iostream>
using namespace std;

class Distance {
private:
    int meter;
    int centimeter;

public:
    void input();
    void display();

    friend Distance addDistance(Distance d1, Distance d2);
};

void Distance::input() {
    cout << "Enter meters: ";
    cin >> meter;
    cout << "Enter centimeters: ";
    cin >> centimeter;
}

void Distance::display() {
    cout << "Distance: " << meter <<" m " << centimeter << " cm\n";
}

Distance addDistance(Distance d1, Distance d2) {
    Distance result;

    result.meter = d1.meter + d2.meter;
    result.centimeter = d1.centimeter + d2.centimeter;

    if (result.centimeter >= 100) {
        result.meter += result.centimeter / 100;
        result.centimeter = result.centimeter % 100;
    }

    return result;
}

int main() {
    Distance d1, d2, sum;
	cout<<"\n ----------Enter Data---------- \n";
    cout << "\n Distance 1: \n";
    d1.input();

    cout << "\n Distance 2: \n";
    d2.input();

    sum = addDistance(d1, d2);

    cout << "\nTotal Distance:\n";
    sum.display();

    return 0;
}