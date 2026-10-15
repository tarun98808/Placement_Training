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

    printf("Enter %d numbers:\n", rows * cols);
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

    int top = 0;
    int bottom = rows - 1;
    int left = 0;
    int right = cols - 1;

    printf("Spiral order: ");
    while (top <= bottom && left <= right)
    {
        for (int j = left; j <= right; j++)
            printf("%d ", matrix[top][j]);
        top++;

        for (int i = top; i <= bottom; i++)
            printf("%d ", matrix[i][right]);
        right--;

        if (top <= bottom)
        {
            for (int j = right; j >= left; j--)
                printf("%d ", matrix[bottom][j]);
            bottom--;
        }

        if (left <= right)
        {
            for (int i = bottom; i >= top; i--)
                printf("%d ", matrix[i][left]);
            left++;
        }
    }

    printf("\n");
    return 0;
}
