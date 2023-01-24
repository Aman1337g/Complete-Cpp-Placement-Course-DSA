#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Input number : ";
    cin >> n;
    cout << "Number pattern :\n\n";
    // int i = 1, j = 1, counter = 1;

    // // Method 1
    // while (i <= n)
    // {
    //     counter = 1;
    //     while (counter <= n)
    //     {
    //         cout << j << " ";
    //         counter++;
    //     }
    //     cout << endl;
    //     j++;
    //     i++;
    // }

    // Method 2
    int i = 1;
    while (i <= n)
    {
        int j = 1;
        while (j <= n)
        {
            cout << i << " ";
            j++;
        }
        cout << endl;
        i++;
    }

    // // for equivalent
    // int counter = 1;
    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = 0; j < n; j++)
    //     {
    //         cout << counter << " ";
    //     }
    //     cout << endl;
    //     counter++;
    // }
    return 0;
}
/*
OUTPUT

Input number : 4
Number pattern :

1 1 1 1
2 2 2 2
3 3 3 3
4 4 4 4
*/