/*
    https://leetcode.com/problems/power-of-two/

    231. Power of Two
*/
#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int n;
    cout << "Input Number : ";
    cin >> n;
    int flag = 0;
    for (int i = 0; i < 31; i++)
    {
        int ans = pow(2, i);
        if (n == ans)
        {
            flag = 1;
            break;
        }
        else
        {
            flag = 0;
        }
    }
    if (flag == 1)
        cout << n << " is a power of 2 !!" << endl;
    else
        cout << n << " is not a power of 2 !!" << endl;
    return 0;
}
/*
OUTPUT

Input Number : 19
19 is not a power of 2 !!
*/