#include <iostream>
using namespace std;

int fact(int n)
{
    int f = 1;
    while (n != 0)
    {
        f = f * n;
        n--;
    }
    return f;
}
int main()
{
    int n, r;
    cin >> n >> r;
    cout << n << "C" << r << " : " << float(fact(n) / (fact(r) * fact(n - r)));

    return 0;
}
/*
OUTPUT

10 5
10C5 : 252
*/