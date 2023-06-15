#include <stdio.h>

int main()
{
    // BITWISE OPERATORS = special operators used in bit level programming
    //                     (knowing binary is important for this topic)

    // & = AND
    // | = OR
    // ^ = XOR
    // << = left shift
    // >> = right shift

    int x = 6; // 6 = 00000110
    int y = 12; // 12 = 00001100
    int z = 0; // 0 = 00000000

    z = x & y; // will produce 00000100 = 4
    printf("AND = %d\n", z);

    z = x | y; // will produce 00001110 = 14
    printf("OR = %d\n", z);

    z = x ^ y; // will produce 00001010 = 10
    printf("XOR = %d\n", z);

    z = x << 1; // will produce 00001100 = 12;
    printf("LEFT SHIFT (1) %d\n", z);

    z = x << 2; // will produce 00011000 = 24;
    printf("LEFT SHIFT (2) %d\n", z);

    z = x >> 1; // produce 00000011 = 3;
    printf("RIGHT SHIFT (1) %d\n", z);

    z = x >> 2; // produce 00000001 = 1;  
    printf("RIGHT SHIFT (2) %d\n", z); // NOTE -> For right shifting if the number is odd then it will give the floor division of that number by 2

    // There's one more called the complement operator but it is a little out of the scope of this tutorial

    return 0;
}