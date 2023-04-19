#include <stdio.h>

int main(){

    // format specifier % = defines and formats a type of data to be displayed
    // format specifiers are defined with % signs

    // %c = character
    // %s = string (array of characters)
    // %f = float
    // %lf = double
    // %d = integer

    // %.1 = decimal precision
    // %1 = minimum field width (right aligns)
    // %- left align

    float item1 = 5.75;
    float item2 = 10.00;
    float item3 = 100.99;

    printf("Item 1: £%f\n", item1); // To specify a float, will output £5.750000

    // if we only want to display two digits for the float, then we specify the decimal places after the % sign

    printf("Item 1: £%.2f\n", item1); // To specify a float, will output £5.75

    // Will do the same thing for the other items
    printf("Item 2: £%.2f\n", item2);
    printf("Item 3: £%.2f\n", item3);


    // To specify the field width, we would but a number before the decimal is specified
    printf("Item 1: £%8.2f\n", item1);
    printf("Item 2: £%8.2f\n", item2);
    printf("Item 3: £%8.2f\n", item3);

    // However, a positive number would right align all the field width
    // So, to left align all the field widths, we could make the number negative instead

    printf("Item 1: £%-8.2f\n", item1);
    printf("Item 2: £%-8.2f\n", item2);
    printf("Item 3: £%-8.2f\n", item3);

    return 0;
}
