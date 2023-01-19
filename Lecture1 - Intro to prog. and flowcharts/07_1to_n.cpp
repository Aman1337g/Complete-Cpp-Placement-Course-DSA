#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Input number to which you want to print the natural numbers : ";
    cin >> n;
    int num = 1;
    while (num <= n)
    {
        cout << num << "\n";
        num++;
    }
    return 0;
}
/*
OUTPUT

Input number to which you want to print the natural numbers : 5
1
2
3
4
5
*/