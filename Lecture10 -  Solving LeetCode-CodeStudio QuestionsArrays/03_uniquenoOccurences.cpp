/*
    LeetCode Question 1207. Unique Number Of Occurences
    Link - https://leetcode.com/problems/unique-number-of-occurrences/description/
*/
#include <iostream>
using namespace std;

int mini(int *a, int n)
{
    int min = a[0];
    for (int i = 1; i < n; i++)
    {
        if (min > a[i])
        {
            min = a[i];
        }
    }
    return min;
}

int maxi(int *a, int n)
{
    int max = a[0];
    for (int i = 1; i < n; i++)
    {
        if (max < a[i])
        {
            max = a[i];
        }
    }
    return max;
}

bool unique(int a[], int n)
{
    int minimum = mini(a, n);
    int maximum = maxi(a, n);
    int countar1[100] = {0};

    for (int i = 0; i < n; i++)
    {
        ++countar1[a[i] - minimum];
    }

    int countar2[100] = {0};

    for (int i = 0; i < 100; i++)
    {
        if (countar1[i] > 0)
        {
            ++countar2[countar1[i]];
        }
    }

    for (int i = 1; i < 100; i++)
    {
        if (countar2[i] > 1)
        {
            return false;
        }
    }

    return true;
}

int main()
{
    int a[100] = {};
    int n;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    bool result = unique(a, n);
    cout << (result ? "True" : "False") << endl;

    return 0;
}
/*
OUTPUT

10
-3 0 1 -3 1 1 1 -3 10 0
True
*/