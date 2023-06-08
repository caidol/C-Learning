#include <stdio.h>

// the void is used when there is no return value, however in place the void must be changed to the data type that is being returned

/*
E.g char square(double x) if it returns a character
    int square(double x) if it returns an integer
    double square(double x) if it returns a double

*/
double square(double x)
{
    double result = x * x;
    return result;

    // To shorten the code above we could always write the below
    // return x * x
}

int main()
{
    // return = returns a value back to a calling function
    double x = square(3.14);
    printf("%lf", x);

    // Given that the data type of the return value is what changes void(), this makes sense as to why we name the main
    // function int main(), due to having to return the integer 0 upon successful execution of the code

    return 0;
}