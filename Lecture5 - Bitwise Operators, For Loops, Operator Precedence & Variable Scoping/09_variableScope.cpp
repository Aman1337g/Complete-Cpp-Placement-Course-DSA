#include <iostream>
using namespace std;

int a = 7;
int main()
{
    int a = 32;
    cout << "a = " << a << endl;
    if (true)
    {
        int a = 98;
        int b = 9;
        cout << "a = " << a << endl;
    }
    cout << "a = " << a << endl;
    // cout<<"b = "<<b<<endl;  // error as b existence is only limited to the above if condition block
    cout << "Global a = " << ::a << endl;

    return 0;
}
/*
OUTPUT

a = 32
a = 98
a = 32
Global a = 7
*/