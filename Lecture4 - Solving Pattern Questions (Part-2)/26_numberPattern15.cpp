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
        while (j <= n - i + 1)
        {
            cout << j;
            j++;
        }
        int star = 1;
        while (star <= 2 * (i - 1))
        {
            cout << "*";
            star++;
        }
        j = j - 1;
        while (j)
        {
            cout << j;
            j--;
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

1234554321
1234**4321
123****321
12******21
1********1
*/