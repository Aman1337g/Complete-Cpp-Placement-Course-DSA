#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    cout << "Pattern : \n";
    int i = 1, c = 1;
    cout << endl;
    while (i <= n)
    {
        int j = 1;
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

    // // for equivalent
    // int c = 1;
    // for (int i = 1; i <= n; i++)
    // {
    //     for (int j = 1; j <= i; j++)
    //     {
    //         cout << c << " ";
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
2 3
4 5 6
7 8 9 10
11 12 13 14 15
*/