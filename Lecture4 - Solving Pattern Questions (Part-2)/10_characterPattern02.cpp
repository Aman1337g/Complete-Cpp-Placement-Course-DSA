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
            cout << char('A' + j - 1) << " ";
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

A B C D
A B C D
A B C D
A B C D
*/