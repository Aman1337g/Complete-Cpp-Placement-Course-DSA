// Q Link - https://www.codingninjas.com/studio/problems/symmetry_6581914

#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;

    int spacU = 2 * n - 2;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << "* ";
        }
        for (int j = spacU; j >= 1; j--)
        {
            cout << " ";
        }
        for (int j = 1; j <= i; j++)
        {
            cout << "* ";
        }
        spacU -= 2;
        cout << "\n";
    }
    int spacL = 0;
    for (int i = 1; i <= n - 1; i++)
    {
        for (int j = 1; j <= n - i; j++)
        {
            cout << "* ";
        }
        for (int j = 0; j <= spacL; j++)
        {
            cout << " ";
        }
        for (int j = 1; j <= n - i; j++)
        {
            cout << "* ";
        }
        spacL += 2;
        cout << "\n";
    }

    return 0;
}
/*
OUTPUT

5
*         *
* *       * *
* * *     * * *
* * * *   * * * *
* * * * * * * * * *
* * * *  * * * *
* * *    * * *
* *      * *
*        *
*/