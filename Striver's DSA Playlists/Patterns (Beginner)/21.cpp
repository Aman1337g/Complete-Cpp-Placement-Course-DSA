// Q Link - https://www.codingninjas.com/studio/problems/ninja-and-the-star-pattern-i_6581920

#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        if (i == 1 || i == n)
        {
            for (int j = 1; j <= n; j++)
            {
                cout << "*";
            }
            cout << "\n";
        }
        else
        {
            cout << "*";
            int spac = 0;
            for (int j = 2; j <= n; j++)
            {
                cout << " ";
            }
            cout << "*"
                 << "\n";
        }
    }

    return 0;
}
/*
OUTPUT

5
*****
*    *
*    *
*    *
*****
*/