#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    cout << "Pattern : \n";
    int i = 1;
    cout << endl;
    int c = 1;
    while (i <= n)
    {
        int j = 1;
        while (j <= n)
        {
            cout << c << " ";
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

3
Pattern :

1 2 3
4 5 6
7 8 9
*/