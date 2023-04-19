#include <stdio.h>

int main() {

    // variable = Allocated space in memory to store a value.
    //            We refer to a variable's name to access the stored value.
    //            That variable now behaves as if it was the value it contains.
    //            BUT we need to declare what type of data we are storing.

    int x; // declaration (creating space in memory and defining variable type)
    x = 123; // initialization
    int y = 321; // declaration + initialization

    int age = 21; // integer
    float gpa = 2.05; //floating point number
    char grade = 'C'; // single character (must be placed inside single quotes)
    
    // Because C is not an object oriented language, strings don't technically exist because
    // strings themselves are considered objects. To create a string we must do the below.

    char name[] = "Aidan"; // array of characters

    // To print the variables we must use a format specifier

    printf("Hello %s\n", name); // We use a %s format specifier for strings and then pass in the name variable
    printf("You are %d years old\n", age); // We use a %d format specifier for integers and then pass in the age variable
    printf("Your average grade is %c\n", grade); // We use a %c format specifier for characters and then pass in the grade variable
    printf("Your gpa is %f\n", gpa); // We use a %f format specifier for float/real numbers and then pass in the gpa character

    return 0;
}