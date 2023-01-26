#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Input number : ";
    cin >> n;
    cout << "Pattern :\n\n";
    int i = 1, j = 1;
    // Method 1
    while (i <= n)
    {
        j = n;
        while (j > 0)
        {
            cout << j << " ";
            j--;
        }
        cout << endl;
        i++;
    }
    // // Method 2
    // while (i <= n)
    // {
    //     j = 1;
    //     while (j <= n)
    //     {
    //         cout << n - j + 1 << " ";
    //         j++;
    //     }
    //     cout << endl;
    //     i++;
    // }

    // // for equivalent
    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = 1; j <= n; j++)
    //     {
    //         cout << j << " ";
    //     }
    //     cout << endl;
    // }
    return 0;
}
/*
OUTPUT

Input number : 4
Pattern :

4 3 2 1
4 3 2 1
4 3 2 1
4 3 2 1
*/