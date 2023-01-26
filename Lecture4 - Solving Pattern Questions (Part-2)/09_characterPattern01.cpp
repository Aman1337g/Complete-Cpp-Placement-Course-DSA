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
        while (j <= n)
        {
            cout << char('A' + i - 1) << " "; // 'A' = 65
            j++;
        }
        cout << endl;
        i++;
    }
    return 0;
}
/*
OUTPUT

6
Pattern :

A A A A A A
B B B B B B
C C C C C C
D D D D D D
E E E E E E
F F F F F F
*/