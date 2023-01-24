#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Input number : ";
    cin >> n;
    cout << "Printing natural numbers upto " << n << endl;
    // for (int i = 1; i <= n; i++)
    //     cout << i << endl;
    int i = 1;
    while (i <= n)
    {
        cout << i << endl;
        i++;
    }
    return 0;
}
/*
OUTPUT

Input number : 10
Printing natural numbers upto 10
1
2
3
4
5
6
7
8
9
10
*/