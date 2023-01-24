#include <iostream>
using namespace std;

// int main()
// {
//     int a, b;
//     cout << "Input a and b : ";
//     cin >> a >> b;
//     if (a > b)
//         cout << a << "is greater than " << b << endl;
//     else if (a < b)
//         cout << a << " is less than " << b << endl;
//     else
//         cout << a << " is equal to " << b << endl;
//     return 0;
// }

// Equivalent Code

int main()
{
    int a, b;
    cout << "Input a and b : ";
    cin >> a >> b;
    if (a > b)
    {
        cout << a << " is greater than " << b << endl;
    }
    else
    {
        if (a < b)
            cout << a << " is less than " << b << endl;
        else
            cout << a << " is equal to " << b << endl;
    }
}
/*
OUTPUT

Input a and b : 4 5
4 is less than 5
*/