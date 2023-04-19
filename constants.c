#include <stdio.h>

int main(){

    // constant = fixed value that cannot be altered by the program during its execution

    // Below is a normal example of a float pi being defined and printed

    float pi = 3.14159;

    printf("%f", pi);

    // However this float pi can still be changed in the program

    pi = 3.11212; // this value change can alter the result of the program

    // Instead, we can prevent this occurring by turning the variable into a constant.
    // We can do this by preceding the data type with a 'const'

    const float pi = 3.14159;

    // A common naming convention with constants is to make all the letters of the variable uppercase
    // This is not necessary, however is considered good practice

    const float PI = 3.14159;

    // If we attempt to assign a different value to a constant, we will run into an error

    PI = 3.11212; // Will produce an error

    // Constants help to provide a bit of security

    return 0;
}