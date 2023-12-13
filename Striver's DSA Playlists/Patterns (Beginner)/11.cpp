// Q Link - https://www.codingninjas.com/studio/problems/binary-number-triangle_6581890?utm_source=youtube

#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        if (i % 2 == 0)
        {
            int num = 0;
            for (int j = 1; j <= i; j++)
            {
                cout << num << " ";
                num ^= 1;
            }
            cout << "\n";
        }
        else
        {
            int num = 1;
            for (int j = 1; j <= i; j++)
            {
                cout << num << " ";
                num ^= 1;
            }
            cout << "\n";
        }
    }

    return 0;
}
/*
OUTPUT

5
1
0 1
1 0 1
0 1 0 1
1 0 1 0 1
*/