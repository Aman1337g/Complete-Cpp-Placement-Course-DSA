#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    cout << "Pattern :\n\n";
    int row = 1;
    while (row <= n)
    {
        // space print karlo
        int space = n - row;
        while (space)
        {
            cout << " ";
            space--;
        }
        // star print karlo
        int col = 1;
        while (col <= row)
        {
            cout << "*";
            col++;
        }
        cout << endl;
        row++;
    }

    // // for equivalent
    // for (int row = 1; row <= n; row++)
    // {
    //     int space = n - row;
    //     while (space)
    //     {
    //         cout << " ";
    //         space--;
    //     }
    //     for (int col = 1; col <= row; col++)
    //     {
    //         cout << "*";
    //     }
    //     cout << endl;
    // }
    return 0;
}
/*
OUTPUT

7
Pattern :

      *
     **
    ***
   ****
  *****
 ******
*******
*/