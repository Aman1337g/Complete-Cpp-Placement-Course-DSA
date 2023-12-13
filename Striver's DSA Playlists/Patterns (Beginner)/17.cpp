// Q Link - https://www.codingninjas.com/studio/problems/alpha-hill_6581921

#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    char c;
    for (int i = 1; i <= n; i++)
    {
        for (int j = i; j <= n - 1; j++)
        {
            cout << " ";
        }

        for (int j = 1; j <= i; j++)
        {
            c = 'A' + j - 1;
            cout << c << " ";
        }
        while (c != 'A')
        {
            c--;
            cout << c << " ";
        }
        cout << "\n";
    }

    return 0;
}
/*
OUTPUT

5
    A
   A B A
  A B C B A
 A B C D C B A
A B C D E D C B A
*/