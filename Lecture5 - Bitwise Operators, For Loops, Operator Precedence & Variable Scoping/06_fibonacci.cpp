#include <iostream>
using namespace std;

int main()
{
    int n, a = 0, b = 1, c = 0;
    cout << "Input number : ";
    cin >> n;
    cout << "Fibonacci series containing " << n << " numbers : ";
    if (n == 1)
        cout << "0";

    else if (n == 2)
        cout << "0, 1";
    else if (n < 0)
        cout << "Invalid Input !!";
    else
    {
        cout << "0, 1, ";
        int temp;
        for (int i = 3; i <= n; i++)
        {
            c = a + b;
            a = b, b = c;

            cout << c;

            if (i < n)
                cout << ", "; // To avoid getting unecessary comma(,) at last
        }
    }
    return 0;
}
/*
OUTPUT

Fibonacci series containing 10 numbers : 0, 1, 1, 2, 3, 5, 8, 13, 21, 34
*/