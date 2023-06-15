#include <stdio.h>

int main()
{
    //FILE *pF = fopen("test.txt", "w");

    //fprintf(pF, "Spongebob Squarepants");

    // If we run it again and write something different with the "w" flag, then we will overwrite anything previously written

    //fprintf(pF, "Patrick Star"); // replaces "Spongebob Squarepants"

    // We can add text to our document using the "a" mode

    /*
    FILE *pF = fopen("test.txt", "a");

    fprintf(pF, "\nSpongebob Squarepants");

    fclose(pF);
    */

    // Below is how we can delete a file

    /*
    if(remove("test.txt") == 0) 
    {
        printf("The file was deleted successfully!");
    }
    else
    {   
        printf("The file was not deleted!");
    }
    */

    // we can also write files with their absolute file path

    FILE *pF = fopen("C:\\Users\\aidan\\Desktop\\test.txt", "w"); // This should work but it may not

    fprintf(pF, "Spongebob Squarepants");
    fclose(pF);
    return 0;
}