#include <iostream>
using namespace std;

// int main()
// {
//     for (int i = 0; i < 3; i++)
//     {
//         cout << "HI " << endl;
//         cout << "Hey" << endl;
//         continue; // flow again goes to the loop [ below statement unreachable ]
//         cout << "Reply to karde !!";
//     }
//     return 0;
// }
/*
OUTPUT

HI
Hey
HI
Hey
HI
Hey
*/

// Questions
// 1
// #include <iostream>
// using namespace std;

// int main()
// {
//     for (int i = 0; i <= 15; i += 2)
//     {
//         cout << i << " ";
//         if (i & 1)
//         {
//             continue;
//         }
//     }
//     return 0;
// }
/*
OUTPUT

0 2 4 6 8 10 12 14
*/

// 2
#include <iostream>
using namespace std;

// int main()
// {
//     for (int i = 0; i < 5; i++)
//     {
//         for (int j = i; j <= 5; j++)
//         {
//             cout << i << " " << j << endl;
//         }
//     }
//     return 0;
// }
/*
OUTPUT

0 0
0 1
0 2
0 3
0 4
0 5
1 1
1 2
1 3
1 4
1 5
2 2
2 3
2 4
2 5
3 3
3 4
3 5
4 4
4 5
*/

// 3
#include <iostream>
using namespace std;

int main()
{
    for (int i = 0; i < 5; i++)
    {
        for (int j = i; j <= 5; j++)
        {
            if (i + j == 10)
            {
                break;
            }
            cout << i << " " << j << endl;
        }
    }
    return 0;
}
/*
OUTPUT

0 0
0 1
0 2
0 3
0 4
0 5
1 1
1 2
1 3
1 4
1 5
2 2
2 3
2 4
2 5
3 3
3 4
3 5
4 4
4 5
*/