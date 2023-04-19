#include <stdio.h>

int main() {

    /* escape sequence = character combination consisting of a backslash \
                         followed by a letter or combination of digits.
                         They specify actions within a line or string of text.
                         \n = newline
                         \t = tab
    */

    printf("I\nlike\nPizza!\n"); // will create a newline for each individual word
    printf("1\t2\t3\n4\t5\t6\n7\t8\t9\n"); // will create a grid of numbers
    printf("\"I like Pizza\" - Abraham Lincoln probably\n"); // \" is used to display actual quotes
    printf("\\I like Pizza\\ - Abraham Lincoln probably\n"); // \\ or \/ is used to display actual slashes
    return 0;
}