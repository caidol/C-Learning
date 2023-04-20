#include <stdio.h>
#include <string.h>

int main(){

    //int age;

    //printf("\nHow old are you?");

    // use the scanf function to read in a variable
    // first give the format specifier and then the parameter of the variable preceded by an ampersand (&) sign
    //scanf("%d", &age); 

    //printf("\nYou are %d years old\n", age); // then we print it like usual

    // We are going to get an input for a name

    //char name[25]; // specifies a 25 byte limit

    //printf("What's your name?");
    //scanf("%s", &name);

    //printf("\nHello %s, how are you?", name);

    //scanf("%d", &age); 

    //printf("\nYou are %d years old\n", age); 

    // IMPORTANT: If we have a whitespace in our scanf() function it will not read after that whitespace
    // Instead we must use the fgets() function
    
    //printf("What's your name?");
    //fgets(name, 25, stdin); // variable name, size and input
    //name[strlen(name)-1] = '\0'; // Gets rid of newline character

    //printf("\nHello %s, how are you?", name);

    // A problem is that the characters after the whitespace character will be printed on a new line
    // To fix this, we can include <string.h> and do the following above on line 34

    char name[25]; // bytes
    int age;

    printf("\nWhat's your name?");
    //scanf("%s", &name)
    fgets(name, 25, stdin);
    name[strlen(name)-1] = '\0';

    printf("How old are you?");
    scanf("%d", &age);

    printf("\nHello %s, how are you?", name);
    printf("\nYou are %d years old\n", age); 

    return 0;
}