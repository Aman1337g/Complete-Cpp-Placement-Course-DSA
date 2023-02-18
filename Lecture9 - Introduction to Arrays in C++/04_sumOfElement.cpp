#include <iostream>
using namespace std;

int sumArr(int a[], int n)
{
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += a[i];
    }
    return sum;
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
    cout << "Sum of elements of array : " << sumArr(a, n);

    return 0;
}
/*
OUTPUT

Enter size : 5
Input array : 32 2 1 0 -32
Sum of elements of array : 3
*/