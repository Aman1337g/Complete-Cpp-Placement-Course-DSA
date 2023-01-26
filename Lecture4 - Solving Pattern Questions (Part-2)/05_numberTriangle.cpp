#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    cout << "Pattern : \n";
    int i = 1;
    cout << endl;
    while (i <= n)
    {
        int j = 1;
        while (j <= i)
        {
            cout << i
                 << " ";
            j++;
        }
        cout << endl;
        i++;
    }

    // // for equivalent
    // for (int i = 1; i <= n; i++)
    // {
    //     for (int j = 1; j <= i; j++)
    //     {
    //         cout << i << " ";
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
2 2
3 3 3
4 4 4 4
5 5 5 5 5
*/