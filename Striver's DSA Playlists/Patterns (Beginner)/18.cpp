// Q Link - https://www.codingninjas.com/studio/problems/alpha-triangle_6581429

#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            char c = 'A' + (n - j - 1);
            cout << c << " ";
        }
        cout << "\n";
    }

    return 0;
}
/*
OUTPUT

5
E
E D
E D C
E D C B
E D C B A
*/