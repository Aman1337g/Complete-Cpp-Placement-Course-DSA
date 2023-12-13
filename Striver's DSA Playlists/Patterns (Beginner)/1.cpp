// Q Link - https://www.codingninjas.com/studio/problems/n-forest_6570177

#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << "* ";
        }
        cout << "\n";
    }

    return 0;
}
/*
OUTPUT

5
* * * * *
* * * * *
* * * * *
* * * * *
* * * * *
*/