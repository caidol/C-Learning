#include <stdio.h>
#include <string.h>

// the below code is the syntax for defining a struct
struct Player
{
    char name[12];
    int score;
};

int main()
{
    // struct = collection of related members ("variables")
    //          they can be of different data types
    //          listed under one name in a block of memory
    //          VERY SIMILAR to classes in other languages (but no methods)

    struct Player player1;
    struct Player player2;

    strcpy(player1.name, "Ai"); // we must use the strcpy() function to assign a string
    player1.score = 4;

    strcpy(player2.name, "dan"); 
    player2.score = 5;

    // Below is the code to display the values in a struct

    printf("%s\n", player1.name);
    printf("%d\n", player1.score);

    printf("%s\n", player2.name);
    printf("%d\n", player2.score);

    return 0;
}