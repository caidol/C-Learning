#include <stdio.h>

int main()
{
    FILE *pF = fopen("C:\\Users\\aidan\\OneDrive\\Desktop\\poem.txt", "r");

    // we will need a buffer to act as a container of our text document

    char buffer[255];

    fgets(buffer, 255, pF); // this takes in three arguments (buffer, max_input_size, pointer for the file)
    printf("%s", buffer);

    // to read all of the contents of our file, we can place the above section of code into a while loop

    // It's good to first perform file detection

    if(pF == NULL)
    {
        printf("Unable to open file!\n");
    }
    else{
       while(fgets(buffer, 255, pF) != NULL)
        {
            printf("%s", buffer);
        }
    }

    fclose(pF);

    return 0;
}