#include <iostream>
using namespace std;

int main()
{
    char c;
    cout << "Input character : ";
    cin >> c;
    if (c >= 97 && c <= 122)
        cout << c << " is Lower Case." << endl;
    else if (c >= 65 && c <= 90)
        cout << c << " is Upper Case." << endl;
    else if (c >= '0' and c <= '9') // we can use 'and' as a replacement of '&&' (Logical AND opeerator)
        cout << c << " is Numeric." << endl;
    else
        cout << "Namaste Duniya." << endl;
    return 0;
}
/*
OUTPUT

Input character : 5
5 is Numeric.
*/