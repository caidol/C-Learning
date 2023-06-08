#include <stdio.h>

void birthday()
{   
    printf("\nHappy birthday to you!");
    printf("\nHappy birthday to you!");
    printf("\nHappy birthday dear...YOU!");
    printf("\nHappy birthday to you!\n");
}

int main(){

    // Below is a very inefficient way of saying happy birthday

    /*
    printf("\nHappy birthday to you!");
    printf("\nHappy birthday to you!");
    printf("\nHappy birthday dear...YOU!");
    printf("\nHappy birthday to you!\n");

    printf("\nHappy birthday to you!");
    printf("\nHappy birthday to you!");
    printf("\nHappy birthday dear...YOU!");
    printf("\nHappy birthday to you!\n");

    printf("\nHappy birthday to you!");
    printf("\nHappy birthday to you!");
    printf("\nHappy birthday dear...YOU!");
    printf("\nHappy birthday to you!\n");
    */

    // Instead, we can just simply repeat the first verse two more times and put it into a function

    birthday(); // calls the function

    // to call it three times, we could do this below (I haven't learned for loops yet)
    birthday();
    birthday();
    birthday();
    return 0;
}