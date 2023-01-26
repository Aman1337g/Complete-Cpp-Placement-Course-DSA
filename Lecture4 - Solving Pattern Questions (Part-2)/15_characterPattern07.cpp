#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    cout << "Pattern :\n\n";
    int i = 1, c = 65;
    // Method 1
    // while (i <= n)
    // {
    //     int j = 1;
    //     while (j <= i)
    //     {
    //         cout << char(c + j - 1) << " ";
    //         j++;
    //     }
    //     cout << endl;
    //     i++;
    //     c++;
    // }
    // Method 2
    while (i <= n)
    {
        int j = 1;
        while (j <= i)
        {
            cout << char('A' + i + j - 2) << " ";
            j++;
        }
        cout << endl;
        i++;
    }

    return 0;
}
/*
OUTPUT

5
Pattern :

A
B C
C D E
D E F G
E F G H I
*/