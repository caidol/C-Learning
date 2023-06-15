#include <stdio.h>

void printAge(int *pAge) // parameter is changed to a pointer if a pointer is needed to be used
{
    printf("You are %d years old", *pAge); // dereferencing the pointer
}

int main()
{
    // pointer = a "variable-like" reference that holds a memory address to another variable, array, etc.
    //           some tasks are performed more easily with pointers
    //           * = indirection operator (value at address)

    int age = 21; // each variable has a value and an address

    //printf("address of age: %p\n", &age);
    //printf("value of age: %d\n", age);

    // To create a pointer, we need to make sure they have the same data type as the variable we're pointing to
    
    // A naming convention with pointers is to begin them with *p

    int *pAge = &age;

    //printf("address of age: %p\n", &age);
    //printf("value of pAge: %p\n", pAge);

    // below is to print the value at the stored memory location

    //printf("value of age: %d\n", age);
    //printf("value at stored address: %d\n", *pAge); // this is called dereferencing the pointer
    
    // The data type of the pointer is very important, changing this data type can cause a warning to occur
    // As C is a strongly typed language, you'll want to make sure that the data type of the pointer is the SAME as the data type that you're pointing to

    //printf("size of age: %d bytes\n", sizeof(age));
    //printf("size of pAge: %d bytes\n", sizeof(pAge)); // this should print 8 bytes but it prints 4?

    // one thing that we can do with pointers is pass it as an argument to a function
    
    //printAge(age); // this is the normal version

    printAge(pAge);

    // NOTE: It's good practice if you're declaring a pointer to assign it to NULL

    int *pAge = NULL;
    pAge = &age;

    return 0;
}