#include <stdio.h>

int main()
{
    // array = a data structure that can store many values of the same data type

    // a normal double value: double price = 5.0; 

    // an array of double values is shown below

    double prices[] = {5.0, 10.0, 15.0, 25.0, 20.0}; 
    char name[] = "An array of individual characters";

    // Accessing one of the numbers requires its index value

    printf("$%.2lf\n", prices[0]); // displays the first element
    printf("$%.2lf\n", prices[1]); // displays the second element
    printf("$%.2lf\n", prices[2]); // displays the third element
    printf("$%.2lf\n", prices[3]); // displays the fourth element
    printf("$%.2lf\n", prices[4]); // displays the fifth element

    // Arrays have a fixed size, they cannot be changed after the program compiles

    // we can declare an empty array having a set size without needing to assign any values

    double arr[5];

    arr[0] = 5.0;
    arr[1] = 10.0;
    arr[2] = 15.0;
    arr[3] = 25.0;
    arr[4] = 20.0;


    // we can also assign an array with more characters that can be filled in later
    //double prices[10] = {5.0, 10.0, 15.0, 25.0, 20.0};

    // so there are a few different ways that we can initialise an array 

    return 0;
}