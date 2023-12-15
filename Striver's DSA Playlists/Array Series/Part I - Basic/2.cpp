#include <iostream>
#define f(i, n) for (int i = 0; i < n; i++)

using namespace std;

bool isSorted(int a[], int size)
{
    f(i, size - 1)
    {
        if (a[i] > a[i + 1])
        {
            return false;
        }
    }
    return true;
}

int main()
{
    int n;
    cin >> n;
    int a[n];
    f(i, n)
    {
        cin >> a[i];
    }
    if (isSorted(a, n))
    {
        cout << 1;
    }
    else
    {
        cout << 0;
    }

    return 0;
}
/*
OUTPUT

5
44 5 69 2 3
0
*/

/*
Case 2 - when array is sorted

5
1 2 3 4 5
1
*/