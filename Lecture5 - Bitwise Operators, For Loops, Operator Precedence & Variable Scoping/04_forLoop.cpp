// SYNTAX
// for(initialization; condition; operation)

// print numbers from 1 to n
#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Input number : ";
    cin >> n;
    printf("Printing count from 1 to %d\n", n);
    for (int i = 1; i <= n; i++)
    {
        cout << i << endl;
    }
    return 0;
}
/*
OUTPUT

Input number : 5
Printing count from 1 to 5
1
2
3
4
5
*/