#include <iostream>
using namespace std;

int main()
{
    // pre - (increment/decrement) then assignment
    // post - assignment then (increment/decrement)
    int a, b;
    cout << "Input a and b : "; // 5 8
    cin >> a >> b;
    cout << "a++ = " << a++ << endl;                     // 5
    cout << "++b = " << ++b << endl;                     // 9
    cout << "a-- = " << a-- << endl;                     // 6 then 5
    cout << "--b = " << --b << endl;                     // 8
    cout << "New a = " << a << " and b = " << b << endl; // 5 and 8
    // cout<<"a++ = "<<a++<<endl;
    return 0;
}
/*
OUTPUT

Input a and b : 5 8
a++ = 5
++b = 9
a-- = 6
--b = 8
New a = 5 and b = 8
*/