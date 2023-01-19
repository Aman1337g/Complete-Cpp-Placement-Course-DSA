#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Input Number : ";
    cin >> n;
    int div = 2;
    while (div < n)
    {
        if (n % div == 0)
        {
            cout << n << " is not prime number !!";
            exit(0);
        }
        else
            div++;
    }
    cout << n << " is prime number !!";
    return 0;
}
/*
OUTPUT

Input Number : 89
89 is prime number !!
*/