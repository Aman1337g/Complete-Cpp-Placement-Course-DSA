#include <iostream>
#include <climits>
using namespace std;

int getMax(int a[], int n)
{
    int maxi = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        // Method 2 - there are predefined functions : max and min to find the maximum and minimum element
        maxi = max(maxi, a[i]);
        // if (a[i] > max)
        // {
        //     max = a[i];
        // }
    }
    return maxi;
}
int getMin(int a[], int n)
{
    int mini = INT_MAX;
    for (int i = 0; i < n; i++)
    {
        mini = min(a[i], mini);
        // if (a[i] < min)
        // {
        //     min = a[i];
        // }
    }
    return mini;
}

int main()
{
    int size;
    cout << "Enter size of array : ";
    cin >> size;
    int array[100];
    cout << "Input array : ";
    for (int i = 0; i < size; i++)
    {
        cin >> array[i];
    }
    cout << "Maximum element in array : " << getMax(array, size) << endl;
    cout << "Minimum element in array : " << getMin(array, size) << endl;

    return 0;
}
/*
OUTPUT

Enter size of array : 3
Input array : -1 -11 -111
Maximum element in array : -1
Minimum element in array : -111
*/