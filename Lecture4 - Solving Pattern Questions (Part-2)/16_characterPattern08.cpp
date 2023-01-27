#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    cout << "Pattern :\n\n";
    int i = 1, c = 65 + n - 1;
    // Method 1
    while (i <= n)
    {
        int j = 1;
        while (j <= i)
        {
            cout << char(c + j - 1) << " ";
            j++;
        }
        cout << endl;
        i++;
        c--;
    }
    // // Method 2
    // while (i <= n)
    // {
    //     int j = 1;
    //     char start = 'A' + n - i;
    //     while (j <= i)
    //     {
    //         cout << start << " ";
    //         start++;
    //         j++;
    //     }
    //     cout << endl;
    //     i++;
    // }
    return 0;
}
/*
OUTPUT

5
Pattern :

E
D E
C D E
B C D E
A B C D E
*/