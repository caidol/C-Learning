#include <stdio.h>
#include <stdbool.h>

int main(){

    // logical operators = ! (NOT) reverses the state of a condition

    bool sunny = true;

    if(sunny == true){
        printf("\nIt's sunny outside!");
    }
    else{
        printf("\nIt's cloudy outside!");
    }

    // we can instead check for if it's not sunny outside -> if !sunny resolves to true

    // if sunny = false; then the statements will reverse

    if(!sunny){
        printf("\nIt's cloudy outside!");   
    }
    else{
        printf("\nIt's sunny outside!");
    }

    return 0;
}