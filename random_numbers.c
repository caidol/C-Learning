#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    // pseudo random numbers = A set of values or elements that are statistically random
    //                         (Don't use these for any sort of cryptographic security)

    // If we don't use this random seed below then we will always generate the same three numbers
    srand(time(0)); // srand() is a seed function as a seed for numbers, we pass in the current time as an argument

    int number1 = (rand() % 6) + 1; // this function gives a random number between 0 - 32767 -> instead we can use modulus to determine the range of numbers between 1 - 6.
    // Note: We add 1 as an offset to the number we mod by because computers always start at 0

    // We can generate two more random numbers

    int number2 = (rand() % 6) + 1; // these values that are mod by can be changed
    int number3 = (rand() % 6) + 1;


    printf("%d\n", number1);
    printf("%d\n", number2);
    printf("%d\n", number3);

    return 0;
}