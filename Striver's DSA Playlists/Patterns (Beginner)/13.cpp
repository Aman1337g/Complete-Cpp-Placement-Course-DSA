// Q Link - https://www.codingninjas.com/studio/problems/number-crown_6581894

#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int c = 1;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << c << " ";
            c++;
        }
        cout << "\n";
    }

    return 0;
}
/*
OUTPUT

7
1
2 3
4 5 6
7 8 9 10
11 12 13 14 15
16 17 18 19 20 21
22 23 24 25 26 27 28
*/