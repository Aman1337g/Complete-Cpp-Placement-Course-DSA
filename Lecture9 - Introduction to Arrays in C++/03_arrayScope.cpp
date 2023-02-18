#include <iostream>
using namespace std;

void update(int a[], int n)
{
    cout << "Inside update function\n";
    a[1] = 2323;
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    cout << "\nReturning to main function\n";
}
int main()
{
    int arr[] = {11, 3, 23};
    int n = sizeof(arr) / sizeof(int);
    update(arr, n); // we are passing address of the first element hence updation is happening inside main function too.
    cout << "Printing in main function\n";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}
/*
OUTPUT

Inside update function
11 2323 23
Returning to main function
Printing in main function
11 2323 23
*/