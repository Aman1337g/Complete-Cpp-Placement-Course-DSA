#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Input number : ";
    cin >> n;
    cout << "Factorial of " << n << " is : ";
    int num = 1, ans = 1;
    while (num <= n)
    {
        ans *= num;
        num++;
    }
    cout << ans;
    return 0;
}
/*
OUTPUT

Input number : 7
Factorial of 7 is : 5040
*/