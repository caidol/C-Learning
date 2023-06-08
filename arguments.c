#include <stdio.h>

void birthday(char name[], int age) // the data types are important
{
    printf("\nHappy birthday dear %s!", name);
    printf("\nYou are %d years old!", age);
}

int main()
{
    char name[] = "Bro";
    int age = 21;

    birthday(name, age); // order is important

    // functions can't see inside another function so you must pass in variables as arguments

    return 0;
}