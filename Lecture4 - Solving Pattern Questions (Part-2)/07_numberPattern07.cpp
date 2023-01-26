#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    cout << "Pattern :\n";
    int i = 1, c = 1;
    cout << endl;
    // Method 1 [ using an integer variable c ]
    while (i <= n)
    {
        int j = 1;
        c = i;
        while (j <= i)
        {
            cout << c
                 << " ";
            j++;
            c++;
        }
        cout << endl;
        i++;
    }
    // // Method 2 [ without using an variable c ]
    // while (i <= n)
    // {
    //     int j = i;
    //     while (j < i + i)
    //     {
    //         cout << j
    //              << " ";
    //         j++;
    //     }
    //     cout << endl;
    //     i++;
    // }

    // // for equivalent
    // int c = 1;
    // for (int i = 1; i <= n; i++)
    // {
    //     c = i;
    //     for (int j = 1; j <= i; j++)
    //     {
    //         cout << c << " "; c++;
    //     }
    //     cout << endl;
    // }
    return 0;
}
/*
OUTPUT

7
Pattern :

1
2 3
3 4 5
4 5 6 7
5 6 7 8 9
6 7 8 9 10 11
7 8 9 10 11 12 13
*/