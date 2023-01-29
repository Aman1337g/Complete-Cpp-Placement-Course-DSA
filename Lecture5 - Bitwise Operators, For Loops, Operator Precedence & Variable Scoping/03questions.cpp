//// 1
#include <iostream>
using namespace std;

int main()
{
    int a, b = 1;
    a = 10;
    if (++a)
        cout << b;
    else
        cout << ++b;
    return 0;
}
/*
OUTPUT

1
*/

//// 2
int main()
{
    int a = 1, b = 2;
    if (a-- > 0 && ++b > 2)
    {
        cout << "Stage1 - Inside If ";
    }
    else
    {
        cout << "Stage2 - Inside else ";
    }
    cout << a << " " << b << endl;
}
/*
OUTPUT

Stage1 - Inside If 0 3
*/

//// 3
int main()
{
    int number = 3;
    cout << (25 * (++number));
}
/*
OUTPUT

4
*/

//// 4
int main()
{
    int a = 1;
    int b = a++; // 1 , a = 2
    int c = ++a; // 3
    cout << b;
    cout << c;
}
/*
OUTPUT

13
*/