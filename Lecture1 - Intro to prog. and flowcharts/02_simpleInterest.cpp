#include <iostream>
using namespace std;

int main()
{
    int P, R, T;
    cout << "Input Principal Amount : ";
    cin >> P;
    cout << "Input Rate of Interest : ";
    cin >> R;
    cout << "Input Time (in years) : ";
    cin >> T;
    double SI = (P * R * T) / 100.0;
    cout << "Simple Interest : " << SI;
    return 0;
}
/*
OUTPUT

Input Principal Amount : 56
Input Rate of Interest : 3
Input Time : 2
Simple Interest : 3.36
*/