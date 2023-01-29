#include <iostream>
using namespace std;

int main()
{
    int a, b;
    cout << "Input a and b : ";
    cin >> a >> b;
    cout << "Performing Bitwise Operations :\n";
    cout << "a & b = " << (a & b) << "\n";
    cout << "a | b = " << (a | b) << endl;
    cout << "a ^ b = " << (a ^ b) << endl;
    cout << "~ b = " << ~b << endl;

    // Left and Right shift operators
    cout << "17 << 2 = " << (17 << 2) << endl; // a << n = a*(2^n)
    cout << "17 >> 2 = " << (17 >> 2) << endl; // a >> n = a/(2^n) // integer
    return 0;
}
/*
OUTPUT

Input a and b : 2 7
Performing Bitwise Operations :
a & b = 2
a | b = 7
a ^ b = 5
~ b = -8
17 << 2 = 68
17 >> 2 = 4
*/