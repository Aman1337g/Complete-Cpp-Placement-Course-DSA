// Q Link - https://www.codingninjas.com/studio/problems/number-crown_6581894

#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << j << " ";
        }
        for (int k = 1; k <= 2 * (n - i); k++)
        {
            cout << " ";
        }
        for (int j = i; j >= 1; j--)
        {
            cout << j << " ";
        }
        cout << "\n";
    }

    return 0;
}
/*
OUTPUT

5
1         1
1 2       2 1
1 2 3     3 2 1
1 2 3 4   4 3 2 1
1 2 3 4 5 5 4 3 2 1
*/