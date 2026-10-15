#include<stdio.h>
int main()
{
    int rows, row, column, spaces;
    printf("Enter the number of rows: ");
    if (scanf("%d", &rows) != 1 || rows <= 0)
    {
        printf("Please enter a positive number of rows.\n");
        return 1;
    }

    for (row = 1; row <= rows; row++)
    {
        for (column = 1; column <= row; column++)
        {
            printf("* ");
        }
        for (spaces = 1; spaces <= 2 * (rows - row); spaces++)
        {
            printf(" ");
        }
        for (column = 1; column <= row; column++)
        {
            printf("* ");
        }
        printf("\n");
    }

    for (row = rows - 1; row >= 1; row--)
    {
        for (column = 1; column <= row; column++)
        {
            printf("* ");
        }
        for (spaces = 1; spaces <= 2 * (rows - row); spaces++)
        {
            printf(" ");
        }
        for (column = 1; column <= row; column++)
        {
            printf("* ");
        }
        printf("\n");
    }

    return 0;
}
