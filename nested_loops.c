#include <stdio.h>

// NOTE: There is an issue with the number of columns read on my computer even though it seems that it should be right. Debug another time

int main()
{
    //nested loop = a loop inside of another loop

    int rows;
    int columns;
    char symbol;

    printf("\nEnter # of rows: ");
    scanf("%d", &rows);

    printf("Enter # of columns: ");
    scanf("%d", &columns);

    printf("Columns: %d", columns);

    scanf("%c");

    printf("Columns: %d", columns);

    printf("\nEnter a symbol to use: ");
    scanf("%c", &symbol);

    printf("Columns: %d", columns);

    for(int i = 1; i <= rows; i++)
    {
        for(int j = 1; j <= columns; j++)
        {
           //printf("%d %d", rows, columns);
           printf("%c\n", symbol);
        }
        printf("\n");
    }

    return 0;
}