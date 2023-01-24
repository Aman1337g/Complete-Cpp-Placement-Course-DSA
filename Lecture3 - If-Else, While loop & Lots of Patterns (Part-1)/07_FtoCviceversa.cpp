#include <iostream>
using namespace std;

int main()
{
    int choice;
    double F, C;
    while (1)
    {
        cout << "1. Fahrenheit to Celcius\n2. Celcius to Farhenheit\n3. Exit(press 999)\nEnter choice : ";
        cin >> choice;
        if (choice == 1)
        {
            cout << "Enter temperature in F : ";
            cin >> F;
            cout << "Temperature in C : " << (5.0 / 9) * (F - 32) << endl
                 << endl;
        }
        else if (choice == 2)
        {
            cout << "Enter temperature in C : ";
            cin >> C;
            cout << "Temperature in F : " << (9.0 / 5) * C + 32 << endl
                 << endl;
        }
        else if (choice == 999)
        {
            exit(0);
        }
        else
            cout << "Invalid Choice!!\n\n";
    }
    return 0;
}
/*
OUTPUT

1. Fahrenheit to Celcius
2. Celcius to Farhenheit
3. Exit(press 999)
Enter choice : 1
Enter temperature in F : 98.6
Temperature in C : 37

1. Fahrenheit to Celcius
2. Celcius to Farhenheit
3. Exit(press 999)
Enter choice : 2
Enter temperature in C : 180
Temperature in F : 356

1. Fahrenheit to Celcius
2. Celcius to Farhenheit
3. Exit(press 999)
Enter choice : 3
Invalid Choice!!

1. Fahrenheit to Celcius
2. Celcius to Farhenheit
3. Exit(press 999)
Enter choice : 999
*/