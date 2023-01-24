#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Input number : ";
    cin >> n;
    int sum = 0, num = 1;
    while (num <= n)
    {
        // we can also use the formula for sum of first 'n' natural numbers = (n*(n+1))/2
        sum += num;
        num++;
    } // sum += num  =>  sum = sum + num
    cout << "Sum of first " << n << " natural numbers is : " << sum << endl;
    return 0;
}
/*
OUTPUT

Input number : 5
Sum of first 5 natural numbers is : 15
*/