#include <iostream>
using namespace std;

int main()
{
    int a = 1353;
    cout << a << endl;
    // char a = 'a'; // conflicting declaration
    char b = 'c';
    cout << b << "\n";
    bool c = false;
    cout << c << endl;
    float d = 3.4;
    cout << d << endl;
    double e = 23.2322;
    cout << e << endl;

    int size = sizeof(a); // sizeof shows how much bytes is allocated to that datatype
    int size1 = sizeof(b);
    int size2 = sizeof(c);
    int size3 = sizeof(d);
    int size4 = sizeof(e);
    cout << "Size of int : " << size << endl;
    cout << "Size of char : " << size1 << endl;
    cout << "Size of bool : " << size2 << endl;
    cout << "Size of float : " << size3 << endl;
    cout << "Size of double : " << size4 << endl;

    cout << "\nTypecasting\n";
    int f = 'a';
    cout << f << endl;
    char g = 98;
    cout << g << endl;
    char g1 = 123456;
    cout << g1 << endl;

    unsigned int a1 = -133;
    cout << a1 << endl;

    int a2 = (4 == 2);
    cout << a2 << endl;
    cout << 2 / 5 << endl;
    double a3 = 2.0 / 5;
    cout << a3 << endl;

    return 0;
}
/*
OUTPUT

02_fundamentalDatatypes.cpp: In function 'int main()':
02_fundamentalDatatypes.cpp:34:15: warning: overflow in implicit constant conversion [-Woverflow]
     char g1 = 123456;
               ^~~~~~
1353
c
0
3.4
23.2322
Size of int : 4
Size of char : 1
Size of bool : 1
Size of float : 4
Size of double : 8

Typecasting
97
b
@
4294967163
0
0
0.4
*/