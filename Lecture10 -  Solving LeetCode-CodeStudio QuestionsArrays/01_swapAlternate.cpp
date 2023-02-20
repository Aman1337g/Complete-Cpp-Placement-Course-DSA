// #include <iostream>
// using namespace std;

// // Method 1
// void altSwap(int arr[], int n, int b)
// {
//     for (int i = 0; i < b; i = i + 2)
//     {
//         int temp = arr[i];
//         arr[i] = arr[i + 1];
//         arr[i + 1] = temp;
//     }
// }
// void printArr(int arr[], int n)
// {
//     for (int i = 0; i < n; i++)
//     {
//         cout << arr[i] << " ";
//     }
// }
// int main()
// {
//     int size;
//     int a[100];
//     cout << "Enter size of array : ";
//     cin >> size;
//     cout << "Enter array : ";
//     for (int i = 0; i < size; i++)
//     {
//         cin >> a[i];
//     }
//     if (size % 2 == 0)
//     {
//         altSwap(a, size, size);
//     }
//     else
//     {
//         altSwap(a, size, size - 1);
//     }

//     cout << "\nAfter swapping alternate elements : ";
//     printArr(a, size);

//     return 0;
// }
// /*
// OUTPUT

// Enter size of array : 6
// Enter array : 1 2 3 4 5 6

// After swapping alternate elements : 2 1 4 3 6 5
// */

// Method 2
#include <iostream>
using namespace std;

void altSwap(int a[], int size)
{
    for (int i = 0; i < size; i = i + 2)
    {
        if (i + 1 < size)
        {
            swap(a[i], a[i + 1]);
        }
    }
}
void printArr(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
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
    altSwap(a, size);
    cout << "\nAfter swapping alternate elements : ";
    printArr(a, size);

    return 0;
}
/*
OUTPUT

Enter size of array : 5
Enter array : 1 2 3 4 5

After swapping alternate elements : 2 1 4 3 5
*/