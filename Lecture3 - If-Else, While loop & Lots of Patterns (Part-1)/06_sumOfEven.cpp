#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Input number : ";
    cin >> n;
    int sum = 0, num = 2;
    while (num <= n)
    {
        if (num % 2 == 0)
        {
            sum += num;
            num += 2;
        }
    }
    cout << "Sum of first " << n << " even natural numbers is : " << sum << endl;
    return 0;
}
/*
OUTPUT

Input number : 5
Sum of first 5 even natural numbers is : 6
*/