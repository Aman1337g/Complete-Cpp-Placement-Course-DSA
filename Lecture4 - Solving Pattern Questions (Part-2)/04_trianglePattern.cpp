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
            cout << "*";
            //  << " ";
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
    //         cout << "*";
    //     }
    //     cout << endl;
    // }
    return 0;
}
/*
OUTPUT

10
Pattern :

*
**
***
****
*****
******
*******
********
*********
**********
*/