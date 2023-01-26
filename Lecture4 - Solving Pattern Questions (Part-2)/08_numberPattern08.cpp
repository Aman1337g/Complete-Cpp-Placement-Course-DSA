#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    cout << "Pattern : \n";
    int i = 1;
    cout << endl;
    // Method 1
    while (i <= n)
    {
        int j = i;
        while (j > 0)
        {
            cout << j
                 << " ";
            j--;
        }
        cout << endl;
        i++;
    }
    // // Method 2
    // while (i <= n)
    // {
    //     int j = 1;
    //     while (j <= i)
    //     {
    //         cout << i - j + 1
    //              << " ";
    //         j++;
    //     }
    //     cout << endl;
    //     i++;
    // }

    // // for equivalent
    // for (int i = 1; i <= n; i++)
    // {
    //     for (int j = i; j > 0; j--)
    //     {
    //         cout << j << " ";
    //     }
    //     cout << endl;
    // }
    return 0;
}
/*
OUTPUT

5
Pattern :

1
2 1
3 2 1
4 3 2 1
5 4 3 2 1
*/