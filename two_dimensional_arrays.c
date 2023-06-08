#include <stdio.h>

int main()
{
    // 2D array = an array, where each element is an entire array
    //            useful if you need a matrix, grid, or table of data

    //int numbers[] = {1, 2, 3}; // 1D array

    // With a 2D array, we must specify a maximum number of elements per row
    // setting the number of rows is optional

    /*
    int numbers[2][3] = {
                            {1, 2, 3}, 
                            {4, 5, 6}
                        }; // 2D array
    */

    int numbers[3][3];

    // Below variables are used to help determine the number of rows and columns
    int rows = sizeof(numbers) / sizeof(numbers[0]); // the length of the rows
    int columns = sizeof(numbers[0]) / sizeof(numbers[0][0]); // the length of the columns

    printf("rows: %d\n", rows);
    printf("columns: %d\n", columns);

    // Below is a way that we can assign values to a 2D array

    numbers[0][0] = 1; // assign the first value of the first array
    numbers[0][1] = 2; // assign the second value of the first array
    numbers[0][2] = 3; // assign the third value of the first array
    numbers[1][0] = 4; // assign the first value of the second array
    numbers[1][1] = 5; // assign the second value of the second array
    numbers[1][2] = 6; // assign the third value of the second array
    numbers[2][0] = 7; // assign the first value of the third array
    numbers[2][1] = 8; // assign the second value of the third array
    numbers[2][2] = 9; // assign the third value of the third array

    // If the below was run with the 2D array above, it would not print the final row of values

    /*
    for(int i = 0; i < 2; i++)
    {
        for(int j = 0; j < 3; j++)
        {
            printf("%d ", numbers[i][j]); // Print the element
        }
        printf("\n");
    }
    */
    
    for(int i = 0; i < rows; i++)
    {
        for(int j = 0; j < columns; j++)
        {
            printf("%d ", numbers[i][j]); // Print the element
        }
        printf("\n");
    }

    return 0;
}