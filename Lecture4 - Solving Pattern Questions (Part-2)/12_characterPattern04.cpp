#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    cout << "Pattern :\n\n";
    int i = 1, c = 65;
    // // Method 1
    // while (i <= n)
    // {
    //     int j = 1;
    //     while (j <= n)
    //     {
    //         cout << char(c + j - 1) << " ";
    //         j++;
    //     }
    //     cout << endl;
    //     c++;
    //     i++;
    // }
    // // Method 2
    // while (i <= n)
    // {
    //     int j = 1;
    //     while (j <= n)
    //     {
    //         char ch = 'A' + i + j - 2; // ch = 'A' - 1 + (i + j - 1)
    //         cout << ch << " ";
    //         j++;
    //     }
    //     cout << endl;
    //     i++;
    // }
    // Method 3
    while (i <= n)
    {
        int j = 1;
        char start = 'A' + i - 1;
        while (j <= n)
        {
            cout << start << " ";
            start++;
            j++;
        }
        cout << endl;
        i++;
    }

    return 0;
}
/*
OUTPUT

4
Pattern :

A B C D
B C D E
C D E F
D E F G
*/