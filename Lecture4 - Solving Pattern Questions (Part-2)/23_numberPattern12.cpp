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
        int j = i;
        while (j <= n)
        {
            cout << j;
            j++;
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

1234
 234
  34
   4
*/