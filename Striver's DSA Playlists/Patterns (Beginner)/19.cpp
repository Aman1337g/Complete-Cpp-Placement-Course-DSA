// Q Link - https: // www.codingninjas.com/studio/problems/symmetric-void_6581919

#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n - i + 1; j++)
        {
            cout << "* ";
        }
        for (int j = 1; j <= 2 * (i - 1); j++)
        {
            cout << " ";
        }
        for (int j = 1; j <= n - i + 1; j++)
        {
            cout << "* ";
        }
        cout << "\n";
    }
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << "* ";
        }
        for (int j = 1; j <= 2 * (n - i); j++)
        {
            cout << " ";
        }
        for (int j = 1; j <= i; j++)
        {
            cout << "* ";
        }
        cout << "\n";
    }

    return 0;
}
/*
OUTPUT

5
* * * * * * * * * *
* * * *   * * * *
* * *     * * *
* *       * *
*         *
*         *
* *       * *
* * *     * * *
* * * *   * * * *
* * * * * * * * * *
*/