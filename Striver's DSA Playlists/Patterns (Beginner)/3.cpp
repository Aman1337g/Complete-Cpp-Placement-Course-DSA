// Q Link - https://practice.geeksforgeeks.org/problems/triangle-number/1

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
        cout << "\n";
    }

    return 0;
}
/*
OUTPUT

5
1
1 2
1 2 3
1 2 3 4
1 2 3 4 5
*/