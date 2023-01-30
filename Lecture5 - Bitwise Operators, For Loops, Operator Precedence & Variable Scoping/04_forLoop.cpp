// SYNTAX
// for(initialization; condition; operation)
//// Working

// first we come to initialization step then condition step then if it is true then flow goes to the body then flow goes to
// updation then to condition if condtion becomes true then flows go to body this goes till the condition becomes false.

// // print numbers from 1 to n
#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Input number : ";
    cin >> n;
    printf("Printing count from 1 to %d\n", n);
    // Method 1
    // for (int i = 1; i <= n; i++)
    // {
    //     cout << i << endl;
    // }

    // Method 2
    // int i = 1;
    // for (;;)
    // {
    //     if (i <= n)
    //     {
    //         cout << i << endl;
    //     }
    //     else
    //         break;
    //     i++;
    // }

    // Equivalent to
    for (int i = 1, a = 3;;)
    {
        if (i <= n)
        {
            cout << i << endl;
        }
        else
            break;
        i++;
    }
    return 0;
}
/*
OUTPUT

Input number : 5
Printing count from 1 to 5
1
2
3
4
5
*/

// Example of for
#include <iostream>
using namespace std;

int main()
{
    for (int a = 1, b = 0; a >= 1 && b >= 0; a--, b--) // means we can multiple conditions and variables in for loop
    {
        cout << a << " " << b << endl;
    }
    return 0;
}
/*
OUTPUT

1 0
*/