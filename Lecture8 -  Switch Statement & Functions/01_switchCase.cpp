#include <iostream>
using namespace std;

// switch do not take float or string value
// continue is not valid in switch statement
int main()
{
    // int num = 2;
    char num = 'a';
    switch (num)
    {
    case 1:
        cout << "First" << endl;
        break;

    case 2:
        cout << "Second" << endl;
        break;
    case 'a':
        cout << "a" << endl;

        switch (num)
        {
        case 'a':
            cout << "The character is a" << endl;
            break;
        case 1:
            cout << "Enter number is 1" << endl;
        default:
            cout << "Tata bye bye thank you !! :)";
            break;
        }
        break;
    default:
        cout << "It is the default case" << endl;
        break;
    }
    return 0;
}
/*
OUTPUT


*/