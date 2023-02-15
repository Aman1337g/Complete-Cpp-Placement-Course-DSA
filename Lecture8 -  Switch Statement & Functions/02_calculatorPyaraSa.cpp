#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    while (1)
    {
        double num1, num2;
        char op;
        cout << "Input two numbers : ";
        cin >> num1 >> num2;
        cout << "Enter operator : ";
        cin >> op;
        switch (op)
        {
        case '+':
            cout << num1 << " + " << num2 << " = " << num1 + num2 << endl;
            break;
        case '-':
            cout << num1 << " - " << num2 << " = " << num1 - num2 << endl;
            break;
        case '*':
            cout << num1 << " * " << num2 << " = " << num1 * num2 << endl;
            break;
        case '/':
            cout << num1 << " / " << num2 << " = " << num1 / num2 << endl;
            break;
        case '^':
            cout << num1 << " ^ " << num2 << " = " << pow(num1, num2) << endl;
            break;

        default:
            cout << "Invalid Operator!!" << endl;
            break;
        }
    }
    return 0;
}
/*
OUTPUT

Input two numbers : 1 2
Enter operator : +
1 + 2 = 3
Input two numbers : 23 3
Enter operator : /
23 / 3 = 7.66667
Input two numbers : 3 4
Enter operator : ^
3 ^ 4 = 81
Input two numbers : 1 2
Enter operator : *
1 * 2 = 2
Input two numbers :
`
`
`
Continued till ထ

*/