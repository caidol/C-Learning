#include <stdio.h>
#include <string.h>

int main()
{
    //char x = 'X';
    //char y = 'Y';

    // if we swap like below, then both the values become the y value
    //x = y;

    // if we swap like below, then both the values become the x value
    //y = x;

    // instead we can create a third variable named temp

    /*
    char temp;
    temp = x;
    x = y;
    y = temp;
    */


    // It's different if we're using strings

    //char x[] = "water";
    //char y[] = "lemonade";
    //char temp[15]; // we should declare a size

    // The below won't work with strings/arrays
    /*
    temp = x;
    x = y;
    y = temp;
    */

    // instead we can use strcpy()

    //strcpy(temp, x);
    //strcpy(x, y);
    //strcpy(y, temp);

    // An issue with strcpy() is that if the length of the second argument is less than the third argument then this can cause unexpected problems

    //char x[] = "water";
    //char y[] = "soda";

    // The way to solve this issue is by making both character arrays the same size
    char x[15] = "water";
    char y[15] = "soda";
    char temp[15];
    
    strcpy(temp, x);
    strcpy(x, y);
    strcpy(y, temp);


    printf("x = %s\n", x);
    printf("y = %s\n", y);

    return 0;
}