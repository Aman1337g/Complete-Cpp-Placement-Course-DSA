// Q Link - https://www.codingninjas.com/studio/problems/reverse-letter-triangle_6581906

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
            cout << char(64 + j) << " ";
        }
        cout << "\n";
    }

    return 0;
}
/*
OUTPUT

5
A B C D E
A B C D
A B C
A B
A
*/