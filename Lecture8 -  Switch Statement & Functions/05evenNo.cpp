#include <iostream>
using namespace std;

bool isEven(int n)
{
    if (n % 2 == 0) // even
        return 1;
    else // odd , we also can use (n&1 == 0) for even condition
        return 0;
}
int main()
{
    int n;
    cout << "Input number : ";
    cin >> n;
    int ans = isEven(n);
    if (ans)
        cout << n << " is an Even number !!";
    else
        cout << n << " is an Odd number !!";

    return 0;
}
/*
OUTPUT

Input number : 12
12 is an Even number !!
*/