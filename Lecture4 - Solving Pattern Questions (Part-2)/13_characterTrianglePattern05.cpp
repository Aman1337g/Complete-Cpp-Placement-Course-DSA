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
        int j = 1;
        while (j <= i)
        {
            cout << char('A' + i - 1) << " ";
            j++;
        }
        cout << endl;
        i++;
    }
    return 0;
}
/*
OUTPUT

5
Pattern :

A
B B
C C C
D D D D
E E E E E
*/