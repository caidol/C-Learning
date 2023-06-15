#include <stdio.h>

// below is the code to write an enum -> they are constants

//enum Day{Mon, Tue, Wed, Thu, Fri, Sat, Sun}; // each value in the array will have an associated integer -> 0 to 6

// We can give each elememt in the enum array a unique number

enum Day{Mon = 1, Tue = 2, Wed = 3, Thu = 4, Fri = 5, Sat = 6, Sun = 7};

int main()
{
    // enum = a user defined type of named integer identifiers
    //        helps to make a program more readable
    //
    //        They can be created both inside and outside a function

    // Below is the code to use an enum

    enum Day today = Sat; // we need to treat enums as if they were an integer

    //printf("%d", today); // enums are NOT STRINGS, but they can be treated as int

    // This method below does work, however it's not very readable because it uses integers and not the associated value

    /*
    if(today == 6 || today == 7)
    {
        printf("\nIt's the weekend! Party time!");
    }
    else
    {
        printf("\nI have to work today :(");
    }
    */

    // This is a better method instead

    if(today == Sat || today == Sun)
    {
        printf("\nIt's the weekend! Party time!");
    }
    else
    {
        printf("\nI have to work today :(");
    }

    return 0;          
}