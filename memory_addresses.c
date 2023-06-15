#include <stdio.h>

int main()
{
    // memory = an array of bytes within RAM 
    // memory block = a single unit (byte) within memory, used to hold some value 
    // memory address = the address of where a memory block is located

    //char a; // here we are setting some amount of memory block aside with an address to store a value
    //char a = 'X'; // if we went to this memory location we would find this character

    //char a = 'X';
    //char b = 'Y';
    //char c = 'Z';

    // The below will print the size of each of the characters
    // they are each 1 byte in memory

    //printf("%d bytes\n", sizeof(a));
    //printf("%d bytes\n", sizeof(b));
    //printf("%d bytes\n", sizeof(c));

    // using the & character allows us to print the memory location of the variable
    // we must also use the %p format specifier

    // memory will be in hexadecimal
    // They will only go down by 1 -> they are contiguous
    //printf("%p\n", &a); 
    //printf("%p\n", &b); 
    //printf("%p\n", &c); 

    // using different data types will lead to different memory locations
    // if we use shorts, it has 2 bytes

    //short a = 'X';
    //short b = 'Y';
    //short c = 'Z';

    // The memory locations now go down by 2 -> they are using up more memory blocks

    //printf("%p\n", &a); 
    //printf("%p\n", &b); 
    //printf("%p\n", &c); 

    // Integers use even more bytes of memory -> 4 bytes
    //int a = 'X';
    //int b = 'Y';
    //int c = 'Z';

    //printf("%p\n", &a); 
    //printf("%p\n", &b); 
    //printf("%p\n", &c); 

    // so what happens with an array?

    char a;
    char b[3]; // the size we set the array to determines the number of bytes used

    // It's also important to take note of the data type of an array
    // E.g, a short uses 2 bytes of memory, and we'll need 3 elements for example. This gives us a total of 2 x 3 = 6 bytes of memory
    //      or an int uses 4, so 4 x 3 = 12 bytes

    // for the above, if I set char b[2]; instead of char b[1]; then the array will instead have 2 bytes
    // Therefore, this causes it to have a different address to accomodate the increased size of the array

    printf("Size of a -> %d bytes\n", sizeof(a));
    printf("Memory address of a -> %p\n", &a);
    printf("Size of b -> %d bytes\n", sizeof(b));
    printf("Memory address of b -> %p\n", &b);
    return 0;
}