#include <iostream>
using namespace std;

int setBits(int n)
{
    int count = 0;
    while (n != 0)
    {
        if (n & 1 == 1)
            count++;
        n = n >> 1;
    }
    return count;
}
int main()
{
    int a, b;
    cout << "Enter two numbers : ";
    cin >> a >> b;
    cout << "Number of set bits(1) in " << a << " and "
         << b << " : " << setBits(a) + setBits(b);
    return 0;
}
/*
OUTPUT

Enter two numbers : 7 8
Number of set bits(1) in 7 and 8 : 4
*/