/* link - https://leetcode.com/problems/subtract-the-product-and-sum-of-digits-of-an-integer/

    Subtract the Product and Sum of Digits of an Integer
*/

#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int pro = 1, sum = 0;
    while (n > 0)
    {
        int lastDig = n % 10;
        n = n / 10;
        sum += lastDig;
        pro *= lastDig;
    }
    cout << pro - sum << endl;
    return 0;
}
/*
OUTPUT

4421
21
*/