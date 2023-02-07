#include <bitset>
#include <iostream>

int main()
{
    int decimal;
    std::cin >> decimal;
    std::bitset<32> binary(decimal);
    std::cout << binary << std::endl;
    return 0;
}
/*
OUTPUT

-6
11111111111111111111111111111010
*/