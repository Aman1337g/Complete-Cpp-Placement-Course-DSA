#include <iostream>
using namespace std;

void reverseArr(int ar[], int size)
{
    // for (int i = 0; i < size; i++)
    // {
    //     ar[i] = ar[size - i - 1];
    //     // cout << ar[size - i - 1] << " ";  // for printing reverse here only
    // }

    // Method 2 - using start and end pointer
    int start = 0, end = size - 1, temp;
    while (start <= end)
    {
        /*
        temp = ar[start];
        ar[start] = ar[end];
        ar[end] = temp;
        start++;
        end--;
        */
        // or we can use predefined function - swap
        swap(ar[start], ar[end]);
        start++;
        end--;
    }
}
int main()
{
    int n;
    cout << "Enter size : ";
    cin >> n;
    int a[100];
    cout << "Input array : ";
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    reverseArr(a, n);
    cout << "After reversing : ";
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }

    return 0;
}
/*
OUTPUT

Enter size : 5
Input array : 1 2 3 4 5
After reversing : 5 4 3 2 1
*/