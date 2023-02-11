/*  link - https://leetcode.com/problems/number-of-1-bits/

    2. Number of 1 Bits
*/

#include <iostream>
using namespace std;

int main()
{
    uint32_t n;
    int count = 0;
    cin >> n;
    while (n != 0)
    {
        if (n & 1 == 1)
        {
            count++;
        }
        n = n >> 1;
    }
    cout << "Number of 1 bits : " << count << endl;
    return 0;
}
/*
OUTPUT

7
Number of 1 bits : 3
*/