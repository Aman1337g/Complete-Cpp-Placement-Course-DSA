#include <iostream>
using namespace std;

int main()
{
    int a, b, c;
    cout << "Input three side (a,b,c) : ";
    cin >> a >> b >> c;
    if (a + b > c)
    {
        if (b + c > a)
        {
            if (c + a > b)
            {
                cout << "Valid Triangle.";
            }
            else
                cout << "Invalid Triangle.";
        }
        else
            cout << "Invalid Triangle.";
    }
    else
        cout << "Invalid Triangle.";
    return 0;
}
/*
OUTPUT

Input three side (a,b,c) : 3 1 10
Invalid Triangle.
*/