#include <iostream>
using namespace std;

int main()
{
    int N;
    cin >> N;
    int sum = 0;
    for (int i = 1; i <= N; i++)
    {
        sum += i;
    }
    cout << "Sum of natural numbers till " << N << " is : " << sum;
    return 0;
}
/*
OUTPUT

5
Sum of natural numbers till 5 is : 15
*/