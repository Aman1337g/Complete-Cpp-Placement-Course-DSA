// Q Link - https://www.codingninjas.com/studio/problems/largest-element-in-the-array-largest-element-in-the-array_5026279

#include <iostream>
#define f(i, n) for (int i = 0; i < n; i++)

using namespace std;

int main()
{
    int n;
    cin >> n;
    int a[n];
    f(i, n)
    {
        cin >> a[i];
    }
    int largest = a[0];
    f(i, n)
    {
        largest = (a[i] > largest) ? a[i] : largest;
    }
    cout << largest;

    return 0;
}
/*
OUTPUT

5
12 2 1 3 -4
12
*/