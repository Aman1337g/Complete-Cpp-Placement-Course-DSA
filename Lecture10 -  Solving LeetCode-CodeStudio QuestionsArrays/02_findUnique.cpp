/*
    Code Studio Problem
    Link - https://www.codingninjas.com/codestudio/problems/find-unique_625159

    Find Unique
*/
#include <iostream>
using namespace std;

void printArr(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}
void findUnique(int a[], int n)
{
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        ans = ans ^ a[i];
    }
    cout << "Unique Element : " << ans;
}
int main()
{
    int size;
    int a[100];
    cout << "Enter size of array : ";
    cin >> size;
    cout << "Enter array : ";
    for (int i = 0; i < size; i++)
    {
        cin >> a[i];
    }
    findUnique(a, size);

    return 0;
}
/*
OUTPUT

Enter size of array : 5
Enter array : 1 2 2 1 4
Unique Element : 4
*/