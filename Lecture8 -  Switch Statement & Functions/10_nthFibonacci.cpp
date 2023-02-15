#include <iostream>
using namespace std;

int nthFibo(int n)
{
    if (n == 0)
        return 0;
    else if (n == 1)
        return 1;
    else
    {
        return nthFibo(n - 1) + nthFibo(n - 2);
    }
}
int main()
{
    int n;
    cout << "Input term : ";
    cin >> n;
    cout << n << "th Fibonacci term : " << nthFibo(n - 1);
    return 0;
}
/*
OUTPUT

Input term : 12
12th Fibonacci term : 89
*/