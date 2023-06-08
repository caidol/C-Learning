#include <stdio.h>

// In previous tutorials, functions were written as shown below

/*
void hello(char name[], int age)
{
    printf("\nHello %s", name);
    printf("\nYou are %d years old");
}
*/

void hello(char[], int); // function prototype


int main()
{
    // function prototype -> ensures only correct arguments can be passed in

    // WHAT IS IT?
    // Function declaration, w/o a body, before main()
    // Ensures that calls to a function are made with the correct arguments

    // IMPORTANT NOTES
    // Many C compilers do not check for parameter matching
    // Missing arguments will result in unexpected behaviour
    // A function prototype causes the compiler to flag an error if arguments are missing

    char name[] = "Aidan";
    int age = 21;

    hello(name, age); // if we only pass in a name then the function will still run but it will produce unexpected behaviour

    // using the function prototype, instead of receiving a warning we will receive an error

    return 0;
}


void hello(char name[], int age)
{
    printf("\nHello %s", name);
    printf("\nYou are %d years old", age);
}