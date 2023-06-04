#include <stdio.h>
#include <ctype.h> // for string functions

int main(){

    char unit;
    float temp;

    printf("\nIs the temperature in (F) or (C)?: ");
    scanf("%c", &unit);

    // To convert the character to upper/lower then we can use the toupper()

    unit = toupper(unit);

    if (unit == 'C'){
        //printf("The temp is currently in C");
        printf("Enter the temp in Celsius: ");
        scanf("%f", &temp);
        temp = (temp * 9 / 5) + 32;
        printf("\nThe temp in Farenheit is: %.1f", temp);
    }
    else if (unit == 'F'){
        //printf("The temp is currently in F");
        printf("Enter the temp in Celsius: ");
        scanf("%f", &temp);
        temp = ((temp - 32) * 5) / 9;
        printf("\nThe temp in Celsius is: %.1f", temp);
    }
    else{
        printf("\n%c is not a valid unit of measurement", unit);
    }

    // A problem that we currently have is that the user input wouldn't be recognised as F/C if it's lower case because C is case sensitive

    return 0;
}