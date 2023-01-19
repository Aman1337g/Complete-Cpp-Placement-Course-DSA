#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Input no. : ";
    cin >> n;
    if (n % 2 == 0)
        cout << n << " is even.";
    else
        cout << n << " is odd.";
    return 0;
}
/*
OUTPUT

Input no. : 6
6 is even.
*/