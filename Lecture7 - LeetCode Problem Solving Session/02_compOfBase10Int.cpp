/*
    Link - https://leetcode.com/problems/complement-of-base-10-integer/

    1009. Complement of Base 10 Integer
*/
#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int n;
    cout << "Input Number : ";
    cin >> n;
    int m = n;
    int mask = 0;
    if (n == 0) // edge case
        cout << "Complement of 0 is : 1" << endl;
    else
    {
        while (m != 0)
        {
            mask = (mask << 1) | 1;
            m = m >> 1;
        }
        int ans = (~n) & mask;
        cout << "Complement of " << n << " is : " << ans << endl;
    }
    return 0;
}
/*
OUTPUT

Input Number : 10
Complement of 10 is : 5
*/