#include <iostream>
using namespace std;

int main()
{
    int num;

    cout << "Enter a number: ";
    cin >> num;

    try
    {
        if (num < 0)
        {
            throw "You cannot take negative number";
        }

        cout << "You entered: " << num << endl;
    }
    catch (const char* message)
    {
        cout << "Error: " << message << endl;
    }

    return 0;
}