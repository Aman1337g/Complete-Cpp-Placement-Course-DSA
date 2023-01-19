#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Input number : ";
    cin >> n;
    int num = 2;
    cout << "Even numbers between 1 to " << n << " (exclusive):\n";
    while (num < n)
    {
        if (num % 2 == 0)
            cout << num << endl;
        num++;
    }
    return 0;
}
/*
OUTPUT

Input number : 10
Even numbers between 1 to 10 (exclusive):
2
4
6
8
*/