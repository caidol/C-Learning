#include <stdio.h>
#include <string.h>

int main()
{
    double prices[] = {5.0, 10.0, 15.0, 25.0, 20.0, 30.0};

    printf("%d bytes\n", sizeof(prices)); // will print the size of the array in bytes
    // Each double uses 8 bytes per element as it is a double

    // Below is a very unefficient and unpractical way to print elements

    /*
    printf("%lf", prices[0]);
    printf("%lf", prices[1]);
    printf("%lf", prices[2]);
    printf("%lf", prices[3]);
    printf("%lf", prices[4]);
    */

    // If another element is added to this array, then it will be unable to be iterated over
    // This is because we set the for loop to iterate if i was less than 5

    /*
    for(int i = 0; i < 5; i++)
    {
        printf("$%.2lf\n", prices[i]);
    }
    */

    // Instead we can calculate the number of elements in the array

    for(int i = 0; i < sizeof(prices)/sizeof(prices[0]); i++) // divide the total size by the size of each element to get the max
    {
        printf("$%.2lf\n", prices[i]);
    }

    // If another element is added then it should update the for loop accordingly

    return 0;
}