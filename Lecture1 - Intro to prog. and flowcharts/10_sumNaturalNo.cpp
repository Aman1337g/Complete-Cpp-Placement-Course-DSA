#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Input Number : ";
    cin >> n;
    int num = 1, sum = 0;
    while (num <= n)
    {
        sum = sum + num;
        num++;
    }
    cout << "Sum of first " << n << " natural numbers : " << sum;
    return 0;
}
/*
OUTPUT

Input Number : 10
Sum of first 10 natural numbers : 55
*/