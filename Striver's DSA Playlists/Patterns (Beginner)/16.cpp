// Q Link - https://www.codingninjas.com/studio/problems/alpha-ramp_6581888

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
            cout << char(64 + i) << " ";
        }
        cout << "\n";
    }

    return 0;
}
/*
OUTPUT

5
A
B B
C C C
D D D D
E E E E E
*/