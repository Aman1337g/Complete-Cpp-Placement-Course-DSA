/* link - https://leetcode.com/problems/subtract-the-product-and-sum-of-digits-of-an-integer/

    1. Subtract the Product and Sum of Digits of an Integer
*/

// #include <iostream>
// using namespace std;

// int main()
// {
//     int n;
//     cin >> n;
//     int pro = 1, sum = 0;
//     while (n > 0)
//     {
//         int lastDig = n % 10;
//         n = n / 10;
//         sum += lastDig;
//         pro *= lastDig;
//     }
//     cout << pro - sum << endl;
//     return 0;
// }
/*
OUTPUT

4421
21
*/

/*  link - https://leetcode.com/problems/number-of-1-bits/

    2. Number of 1 Bits
*/

#include <iostream>
using namespace std;

int main()
{
    uint32_t n;
    int count = 0, bits = 32;
    cin >> n;
    while (n != 0)
    {
        if (n & 1 == 1)
        {
            count++;
        }
        n = n >> 1;
        // bits--;
    }
    cout << "Number of 1 bits : " << count << endl;
    return 0;
}
/*
OUTPUT


*/