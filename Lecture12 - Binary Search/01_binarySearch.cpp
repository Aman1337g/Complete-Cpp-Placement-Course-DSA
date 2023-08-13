// only for elements in monotonic function (either sorted in increasing or decreasing order)
// time complexity , o(log(n))
#include <iostream>
using namespace std;

void print(int a[], int n)
{
    for (int i = 0; i < n; i++)
        cout << a[i] << " ";
    cout << endl;
}
int binarySearch(int a[], int size, int e)
{
    int start = 0, end = size - 1;
    // int mid = (start + end) / 2;
    int mid = start + (end - start) / 2; // to prevent the possibility when start = end = 2^31 - 1 , then above mid value cannot store it.
    while (start <= end)
    {
        if (a[mid] == e)
            return mid;
        else if (e > a[mid])
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
        mid = start + (end - start) / 2;
    }
    return -1;
}
int main()
{
    int n, a[100], data;
    cout << "Enter size of array : ";
    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> a[i];
    print(a, n);
    cout << "Enter data to be searched : ";
    cin >> data;
    int index = binarySearch(a, n, data);
    if (index == -1)
        cout << data << " not found in the array.\n";
    else
        cout << data << " found at index " << index << ".\n";
    return 0;
}
/*
OUTPUT
// for odd sized array
Enter size of array : 5
-100 -56 24 78 100
-100 -56 24 78 100
Enter data to be searched : -56
-56 found at index 1.

// for even sized array
Enter size of array : 6
12 34 56 78 89 90
12 34 56 78 89 90
Enter data to be searched : 100
100 not found in the array.
*/