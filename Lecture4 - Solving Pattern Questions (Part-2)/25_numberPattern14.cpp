#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    cout << "Pattern :\n\n";
    int i = 1;
    // Method 1 [ Doing in three parts - space then right triangle and then other half right triangle ]
    // while (i <= n)
    // {
    //     int space = n - i;
    //     while (space)
    //     {
    //         cout << " ";
    //         space--;
    //     }
    //     int j = 1;
    //     while (j <= i)
    //     {
    //         cout << j;
    //         j++;
    //     }
    //     j = i - 1;
    //     while (j >= 1)
    //     {
    //         cout << j;
    //         j--;
    //     }
    //     cout << endl;
    //     i++;
    // }

    // Mehtod 2
    while (i <= n)
    {
        int space = n - i;
        while (space)
        {
            cout << " ";
            space--;
        }
        int j = 1;
        while (j <= i)
        {
            cout << j;
            j++;
        }
        j = i - 1;
        while (j)
        {
            cout << j;
            j--;
        }
        cout << endl;
        i++;
    }
    return 0;
}
/*
OUTPUT

4
Pattern :

   1
  121
 12321
1234321
*/