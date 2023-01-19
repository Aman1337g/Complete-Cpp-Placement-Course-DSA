#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Input number : ";
    cin >> n;
    if (n > 0)
        cout << "Number is positive.";
    else
    {
        if (n < 0)
            cout << "Number is negative.";
        else
            cout << "Number is Zero.";
    }
    return 0;
}
/*
OUTPUT

Input number : -8
Number is negative.
*/