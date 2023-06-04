#include <stdio.h>

int main(){

    // switch = A more efficient alternative to using many "else if" statements
    //          allows a value to be tested for equality against many cases
    char grade;

    printf("\nEnter a letter grade: ");
    scanf("%c", &grade);

    // This below is considered a bad practice to carry out
    /*
    if (grade == 'A'){
        printf("perfect!\n" );
    }
    else if (grade == 'B'){
        printf("You did good!\n" );
    }
    else if (grade == 'C'){
        printf("You did okay\n" );
    }
    else if (grade == 'D'){
        printf("At least it's not an F\n" );
    }
    else if (grade == 'F'){
        printf("YOU FAILED\n" );
    }
    else{
        printf("That's not a valid grade\n" );
    }
    */

    /* Instead we can do switch and case statements
    
    We first write the switch statement with our variable name inside
    
    Then we have each case with the potential value, and then put some indented code to show which code should be executed
    
    Case statements should always end in break to indicate that no other case statements should be run. It allows us to exit out of our switch.
    
    The default statement is the equivalent of an else statement and is used to give an output when no case is matched (this doesn't need to have a break)
    */

    switch(grade){
        case 'A':
            printf("perfect!\n");
            break;
        case 'B':
            printf("You did good!\n");
            break;
        case 'C':
            printf("You did okay!\n");
            break;
        case 'D':
            printf("At least it's not an F!\n");
            break;
        case 'F':
            printf("YOU FAILED!\n");
            break;
        default:
            printf("Please enter only valid grades");
    }

    // If no break was used then all the statements below the current case would also be run

    return 0;
}