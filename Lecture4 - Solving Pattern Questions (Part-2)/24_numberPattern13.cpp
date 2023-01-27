#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    cout << "Pattern :\n\n";
    int i = 1;
    int c = 1;
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
            cout << c;
            c++;
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

   1
  23
 456
78910
*/