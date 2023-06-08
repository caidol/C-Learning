#include <stdio.h>

int main()
{
    // continue = skips rest of code & forces the next iteration of the loop
    // break = exits a loop/switch

    for(int i = 1; i <= 20; i++)
    {
        // below will skip the next of the current iteration and force the next iteration
        /*
        if(i == 13)
        {
            continue;
        }
        */

        // below will break out and stop the loop entirely
        /*
        if(i == 13)
        {
            break;
        }
        */

        printf("%d\n", i);
    }

    return 0;
}