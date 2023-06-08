#include <stdio.h>

int findMax(int x, int y)
{
    // This code below does work, however it is definitely a bit longer to write

    /*
    if (x > y)
    {
        return x;
    }
    else
    {
        return y;
    }
    */

    // Below is the ternary operator expression, it follows the format of <return (condition) ? return val if true : return val if false>
    return (x > y) ? x : y;
}

int main()
{
    // ternary operator = shortcut to if/else when assigning/returning a value
    // (condition) ? value if true : value if false

    // Example below

    int max = findMax(3, 4); // function we declared to find the max value

    printf("%d", max);

    return 0;
}