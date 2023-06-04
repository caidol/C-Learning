#include <stdio.h>

int main(){

    int age;

    printf("\nEnter your age: ");
    scanf("%d", &age);

    /*
    If statements will use comparison operators to resolve boolean expressions

    E.g:
    a < b
    a > b
    a == b
    a <= b
    a >= b
    */

    if (age >= 18){
        printf("You are now signed up!");
    }
    else if (age == 0){
        printf("You can't sign up. You were just born!");
    }
    else if (age < 0){
        printf("You haven't been born yet!");
    }
    else{
        printf("You are too young to sign up!");
    }

    return 0;
}