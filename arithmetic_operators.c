# include <stdio.h>

int main(){

    // arithmetic operators

    // + (addition)
    // - (subtraction)
    // * (multiplication)
    // / (division)
    // % (modulus)
    // ++ increment
    // -- decrement

    int x = 5;
    int y = 2;

    int z = x + y; // addition

    printf("%d\n", z); // Will print 7

    z = x - y; // subtraction

    printf("%d\n", z); // Will now print 3

    z = x * y; // multiplication

    printf("%d\n", z); // Will now print 10


    // THIS IS IMPORTANT

    // If we perform a division like shown below, however the answer is a decimal and it is specified in
    // an int variable, then we will receive a truncated result

    int z = x / y; // Will output 2 instead of 2.5 because we specify to use an int

    float z = x / y; 

    printf("%f", z); // This produces 2.000000, so what has gone wrong?

    // Well, even though we have correctly specified the z variable as being a float, it still doesn't produce the 
    // desired output because we are doing INTEGER DEVISION

    // RULE IN C: If we are dividing by an integer then we will truncate that decimal portion

    // There's 1 of two things that we can do

    // 1: Change our divisor to a float/double

    int x = 5;
    float y = 2;

    float z = x / y;

    printf("%f", z); // Will output 2.500000 

    // or, if we'd like to keep the previously defined variable an integer, then we can convert the integer that we're
    // dividing by to a float by preceding the divisor with float/double

    int x = 5;
    int y = 2;

    float z = x / (double) y;
    // or
    float z = x / (float) y;

    printf("%f", z); // Will output 2.500000 


    // modulus will give the remainder of any division

    int z = x % y;

    printf("%d", z); // Will produce 1 as the remainder

    // If the one divisor went into the other number, then the remainder would be 0

    int x = 4;
    int y = 2;

    int z = x % y;

    printf("%d", z); // Will output 0

    // To increment we use ++

    int x = 5;

    x++;

    printf("%d", x); // will print 6

    // To increment we use --
    int y = 2;

    y--;

    printf("%d", y); // Will output 1

    return 0;
}