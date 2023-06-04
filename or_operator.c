#include <stdio.h>
#include <stdbool.h>

int main(){

    // logical operators = || (OR) checks if at least one condition is true

    float temp = 25;

    // this program below does work, however there is a better way of writing it

    if (temp <= 0){
        printf("\nThe weather is bad!");
    }
    else if (temp >= 30){
        printf("\nThe weather is bad!");
    }
    else{
        printf("\nThe weather is good!");
    }


    // the below will only need to execute if one of the conditions are true
    
    // temp = 25 -> The weather is good!
    // temp = -5 -> The weather is bad!
    // temp = 1000 -> The weather is bad!
    
    if (temp <= 0 || temp >= 30){
        printf("\nThe weather is bad!");
    }
    else{
        printf("\nThe weather is good!");
    }

    return 0;
}