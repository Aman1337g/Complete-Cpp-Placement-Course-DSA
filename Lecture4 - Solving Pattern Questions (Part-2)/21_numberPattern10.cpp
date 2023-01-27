#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    cout << "Pattern :\n\n";
    int i = 1;
    while (i <= n)
    {
        int space = 0;
        while (space < i - 1)
        {
            cout << " ";
            space++;
        }
        int j = 1;
        while (j <= n - i + 1)
        {
            cout << i;
            j++;
        }
        cout << endl;
        i++;
    }
    return 0;
}
/*
OUTPUT

 ; if ($?) { .\21_numberPattern10 }
4
Pattern :

1111
 222
  33
   4
*/