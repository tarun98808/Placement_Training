#include <stdio.h>
int main(void)
{
    int matrix[100][100];
    int rows, cols;
    printf("Enter the number of rows and columns (maximum 100 each): ");
    if (scanf("%d %d", &rows, &cols) != 2 ||
        rows < 1 || rows > 100 || cols < 1 || cols > 100)
    {
        printf("Invalid matrix dimensions.\n");
        return 1;
    }
    printf("Enter the matrix values row by row (%d rows, %d columns):\n",
           rows, cols);
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            if (scanf("%d", &matrix[i][j]) != 1)
            {
                printf("Invalid input.\n");
                return 1;
            }
        }
    }
    printf("Original matrix:\n");
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
            printf("%d\t", matrix[i][j]);
        printf("\n");
    }
    printf("Matrix rotated 90 degrees clockwise:\n");
    for (int i = 0; i < cols; i++)
    {
        for (int j = 0; j < rows; j++)
            printf("%d\t", matrix[rows - 1 - j][i]);
        printf("\n");
    }
    return 0;
}