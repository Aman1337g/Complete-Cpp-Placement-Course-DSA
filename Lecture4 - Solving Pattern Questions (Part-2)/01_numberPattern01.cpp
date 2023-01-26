#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Input number : ";
    cin >> n;
    cout << "Pattern :\n\n";
    int i = 1, j = 1;
    while (i <= n)
    {
        j = 1;
        while (j <= n)
        {
            cout << j << " ";
            j++;
        }
        cout << endl;
        i++;
    }

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

1 2 3 4
1 2 3 4
1 2 3 4
1 2 3 4
*/