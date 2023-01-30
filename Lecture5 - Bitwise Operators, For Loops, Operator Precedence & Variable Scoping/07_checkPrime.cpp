/*
    A prime number is a positive integer greater than 1 that has no positive integer divisors other
    than 1 and itself. It means that it can only be divided evenly by 1 and itself, and is therefore
    considered a "building block" of other positive integers.
*/
#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Input number[+ve integer] : ";
    cin >> n;
    // Method 1
    // if (n == 0)
    //     cout << "0 is not Prime number !!";
    // else
    // {
    //     for (int i = 2; i <= n - 1; i++)
    //     {
    //         if (n % i == 0)
    //         {
    //             cout << n << " is not Prime number !!";
    //             exit(0);
    //         }
    //     }
    //     cout << n << " is Prime number !!";
    // }

    // Method 2 [ using break ]
    bool isPrime;
    for (int i = 2; i <= n - 1; i++)
    {
        if (n % i == 0)
        {
            isPrime = 0;
            break;
        }
        else
        {
            isPrime = 1;
        }
    }
    if (isPrime == true)
        cout << n << " is Prime number !!";
    else
        cout << n << " is not Prime number !!";
    return 0;
}
/*
OUTPUT

Input number[+ve integer] : 7
7 is Prime number !!
*/