#include <stdio.h>

int main()
{
    // while loop = checks a condition, THEN executes a block of code if condition is true
    // do while loop = always executes a block of code once, THEN checks a condition

    int number = 0;
    int sum = 0;

    // Since the while loop checks the condition first, we're not actually going to execute this body of code below

    /*
    while (number > 0)
    {
        printf("Enter a # above 0: ");
        scanf("%d", &number);
        if (number > 0)
        {
            sum += number;
        }
    }
    */

    // below is a do while loop
    do
    {
        printf("Enter a # above 0: ");
        scanf("%d", &number);
        if (number > 0)
        {
            sum += number;
        }
    } while (number > 0);

    printf("sum: %d", sum);

    return 0;
}