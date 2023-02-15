#include <iostream>
using namespace std;

// int main()
// {
//     int a;
//     // pow(a, b)
//     cin >> a;
//     int ans = 1;
//     int b;
//     cin >> b;
//     cout << a << "^" << b << " = ";
//     for (int i = 0; i < b; i++)
//     {
//         ans = ans * a;
//     }
//     cout << ans;

//     return 0;
// }
/*
OUTPUT

2 8
2^8 = 256
*/

// Using functions

int pow(int a, int b)
{
    int ans = 1;
    for (int i = 0; i < b; i++)
    {
        ans = ans * a;
    }
    return ans;
}
int main()
{
    int a, b;
    cin >> a >> b;
    cout << a << "^" << b << " = " << pow(a, b);
}