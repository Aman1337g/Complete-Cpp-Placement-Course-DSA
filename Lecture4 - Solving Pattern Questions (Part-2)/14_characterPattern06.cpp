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
            cout << char(c) << " ";
            j++;
            c++;
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
B C
D E F
G H I J
K L M N O
*/