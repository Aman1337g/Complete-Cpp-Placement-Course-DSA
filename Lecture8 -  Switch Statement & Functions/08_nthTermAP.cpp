#include <iostream>
using namespace std;

void nthTerm(int a)
{
    cout << a << "th term where an = (3*n)+7 : " << 3 * a + 7 << endl;
}
int main()
{
    int n;
    cout << "Enter term whose value to find : ";
    cin >> n;
    nthTerm(n);
    return 0;
}
/*
OUTPUT

Enter term whose value to find : 3
3th term where an = (3*n)+7 : 16
*/