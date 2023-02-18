// #include <iostream>
// using namespace std;

// int main()
// {
//     int dost[100] = {0}; // create an array with name dost containing 100 elements each intialised with 0
//     cout << "Value of element at index 0 or first element :  " << dost[0] << endl;
//     cout << dost[1] << endl;
//     cout << dost[2] << endl;
//     int dost1[100] = {-1}; // Here only first element is intialised with -1 rest are intialized with 0
//     cout << endl;
//     cout << dost1[0] << endl;
//     cout << dost1[1] << endl;
//     cout << dost1[2] << endl;

//     // Initializing entire array with a default value

//     // Method 1 - using fill_n()
//     int dost2[1000];
//     fill_n(dost2, 201, 1); // initialises first 201 elements of array dost2 with 1
//     cout << endl;
//     cout << dost2[0] << endl;
//     cout << dost2[1] << endl;
//     cout << dost2[2] << endl;
//     cout << dost2[200] << endl;
//     cout << dost2[201] << endl;

//     // Method 2 - using for loop
//     int dost3[1000];
//     for (int i = 0; i < 200; i++) // initialising first 200 elements of array dost3 with
//     {
//         dost3[i] = -1;
//     }
//     cout << endl;
//     cout << dost3[0] << endl;
//     cout << dost3[1] << endl;
//     cout << dost3[2] << endl;
//     cout << dost3[200] << endl;
//     cout << dost3[201] << endl;
//     cout << dost3[1000];

//     return 0;
// }
// /*
// OUTPUT

// 0
// 0

// -1
// 0
// 0

// 1
// 1
// 1
// 1
// 2006831650

// -1
// -1
// -1
// 0
// 0
// 1
// */

#include <iostream>
using namespace std;

void printArray(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
}
int main()
{
    int array[5] = {1, 2, 3};
    int n = 5;
    cout << "Printing array : ";
    for (int i = 0; i < n; i++)
    {
        cout << array[i] << " ";
    }

    int array2[2] = {1, 3};
    cout << "\nArray 2 : ";
    printArray(array, 2);
    int array3[4] = {111};
    cout << "\nArray 3 : ";
    printArray(array3, 4);

    int array3size = sizeof(array3) / sizeof(int);
    printf("\nSize of array3 : %d", array3size); // here the elements in array3 is only 111 but array3size is giving us the whole length

    char ch[5] = {'a', 'e', 'r', 'e'};
    // printArray(ch, 5); // error as function printArray only takes integer array
    cout << "\nPrinting character array : ";
    for (int i = 0; i < sizeof(ch) / sizeof(char); i++)
    {
        cout << ch[i] << " ";
    }
    /*
        Array of different datatypes

        float f[3];
        double d[34];
        bool b[3];
    */

    return 0;
}
/*
OUTPUT

Printing array : 1 2 3 0 0
Array 2 : 1 2
Array 3 : 111 0 0 0
Size of array3 : 4
Printing character array : a e r e
*/