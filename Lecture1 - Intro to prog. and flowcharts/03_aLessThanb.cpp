#include <iostream>
using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;
    if (a < b)
        cout << a << " less than " << b << endl;
    else
        cout << a << " not less than " << b << endl;
    return 0;
}
/*
OUTPUT

5 6
5 less than 6
*/