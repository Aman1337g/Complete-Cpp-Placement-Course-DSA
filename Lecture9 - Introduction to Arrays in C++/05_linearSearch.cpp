#include <iostream>
using namespace std;

bool linearSearch(int arr[], int n, int e)
{
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == e)
            return true;
    }
    return false;
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
    int data;
    cout << "Enter data to search : ";
    cin >> data;
    int search = linearSearch(a, n, data);
    if (search)
        cout << data << " is present in array.";
    else
        cout << data << " is not present in array.";

    return 0;
}
/*
OUTPUT

Enter size : 5
Input array : -1 -22 22 221 45
Enter data to search : 99
99 is not present in array.
*/