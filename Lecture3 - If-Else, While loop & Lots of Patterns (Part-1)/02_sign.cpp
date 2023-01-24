#include <iostream>
using namespace std;

int main()
{
    int a;
    cout << "Input number : ";
    // cin >> a;

    // cin.get() takes character as its input (implicit typecasting)
    // Now we can takes space, tab, alphabets, enter,... etc as inputs
    a = cin.get();
    if (a > 0)
        cout << a << " is a positive number.\n";
    else if (a < 0)
        cout << a << " is a negative number.\n";
    else
        cout << "Number entered is zero." << endl;
    return 0;
}
/*
OUTPUT

Input number : a
97 is a positive number.
*/