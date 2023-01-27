#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    cout << "Pattern :\n\n";
    int i = 1;
    // while (i <= n)
    // {
    //     int j = 1;
    //     while (j <= n - i + 1)
    //     {
    //         cout << i << " ";
    //         j++;
    //     }
    //     cout << endl;
    //     i++;
    // }
    // for equivalent
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n - i + 1; j++)
        {
            cout << i << " ";
        }
        cout << endl;
    }
    return 0;
}
/*
OUTPUT

4
Pattern :

1 1 1 1
2 2 2
3 3
4
*/