// Q Link - https://www.codingninjas.com/studio/problems/increasing-letter-triangle_6581897

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
            cout << char(64 + j) << " ";
        }
        cout << "\n";
    }

    return 0;
}
/*
OUTPUT

5
A
A B
A B C
A B C D
A B C D E
*/