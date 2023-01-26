#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    cout << "Pattern :\n\n";
    int i = 1, c = 65;
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
        c++;
    }
    return 0;
}
/*
OUTPUT

5
Pattern :

A
B C
C D E
D E F G
E F G H I
*/