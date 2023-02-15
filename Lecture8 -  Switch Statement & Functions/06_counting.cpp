#include <iostream>
using namespace std;

// Function Signature
void counting(int n)
{
    // Function Body
    for (int i = 1; i <= n; i++)
    {
        cout << i << " ";
    }
}
int main()
{
    int n;
    cin >> n;
    cout << "Natural number till " << n << " : " << endl;
    // Function Call
    counting(n);

    return 0;
}
/*
OUTPUT

20
Natural number till 20 :
1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20
*/