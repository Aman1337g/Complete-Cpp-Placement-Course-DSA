#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Input number : ";
    cin >> n;
    cout << "Star pattern containing equal no. of rows and columns :\n\n";
    int i = 0, column;
    while (i < n)
    {
        column = 0;
        while (column < n)
        {
            cout << "*";
            column++;
        }
        i++;
        cout << endl;
    }

    // // for loop equivalent
    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = 0; j < n; j++)
    //     {
    //         cout << "*";
    //     }
    //     cout << endl;
    // }
    return 0;
}
/*
OUTPUT

Input number : 4
Star pattern containing equal no. of rows and columns :

****
****
****
****
*/