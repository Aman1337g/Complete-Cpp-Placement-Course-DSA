#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Input number : ";
    cin >> n;
    int num = 1;
    cout << "Odd numbers between 1 to " << n << " (inclusive):\n";
    while (num <= n)
    {
        if (num % 2 != 0)
            cout << num << endl;
        num++;
    }
    return 0;
}
/*
OUTPUT

Input number : 15
Odd numbers between 1 to 15 (inclusive):
1
3
5
7
9
11
13
15
*/