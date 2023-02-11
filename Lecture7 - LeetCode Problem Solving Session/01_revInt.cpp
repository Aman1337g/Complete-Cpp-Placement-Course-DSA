/*
    Link - https://leetcode.com/problems/reverse-integer/

    7. Reverse Integer
*/

#include <iostream>
#include <climits>
using namespace std;

int main()
{
    int n;
    cout << "Input Number : ";
    cin >> n;
    int ans = 0;
    while (n != 0)
    {
        int digit = n % 10;
        if ((ans > INT_MAX / 10) || (ans < INT_MIN / 10))
        {
            cout << "Reversed integer is out of bound of Integer variable !!" << endl;
            exit(0);
        }
        ans = 10 * ans + digit;
        n = n / 10;
    }
    cout << "Reversed Integer : " << ans << endl;

    return 0;
}
/*
OUTPUT

Input Number : 12345
Reversed Integer : 54321
*/