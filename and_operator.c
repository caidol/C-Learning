#include <stdio.h>
#include <stdbool.h>

int main(){

    // logical operators == && (AND) checks if two conditions are true

    float temp = 25;

    // below condition with temp = 25 would show that the weather is good

    // however if the weather conditions was very high (for example temp = 1000) then even show it shows 
    // that the weather is good, it is in fact fairly catastrophic

    if (temp >= 0){
        printf("\nThe weather is good!");
    }
    else{
        printf("\nThe weather is bad!");
    }

    // to resolve this, we can check if more than one condition is true using the AND (&&) logical operator.

    temp = 1000; // now it will print that the weather is bad
    temp = 25; // in this case, both statements are satisfied so then it will print that the weather is bad

    // using the AND logical operator, both statements must be true in order to execute the condition

    if (temp >= 0 && temp <= 30){
        printf("\nThe weather is good!");
    }
    else{
        printf("\nThe weather is bad!");
    }

    // using the <stdbool.h> header file, we are able to set a boolean condition that can also be met, as shown below

    float temp = 25;
    bool sunny = false;

    // instead of sunny == true, sunny == 1 or sunny can be used instead
    
    // because sunny is in fact false, we will not actually execute the statement
    // all statements must be true when using the and logical operator

    // if sunny is set to true, then the if statement will execute because that means all the statements are true

    if (temp >= 0 && temp <= 30 && sunny == true ){ 
        printf("\nThe weather is good!");
    }
    else{
        printf("\nThe weather is bad!");
    }
    
    return 0;
}