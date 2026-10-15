#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int size;
    int *array;
    int i;
    int jumps = 0;
    int currentEnd = 0;
    int farthest = 0;

    printf("Enter the number of array elements: ");
    if (scanf("%d", &size) != 1 || size <= 0)
    {
        printf("Please enter a positive array size.\n");
        return 1;
    }

    if ((size_t)size > (size_t)-1 / sizeof(*array))
    {
        printf("The requested array is too large.\n");
        return 1;
    }

    array = malloc((size_t)size * sizeof(*array));
    if (array == NULL)
    {
        printf("Could not allocate memory for the array.\n");
        return 1;
    }

    printf("Enter %d non-negative values (maximum jump length at each position):\n", size);
    for (i = 0; i < size; i++)
    {
        if (scanf("%d", &array[i]) != 1 || array[i] < 0)
        {
            printf("Please enter non-negative integer values.\n");
            free(array);
            return 1;
        }
    }

    for (i = 0; i < size - 1; i++)
    {
        int reach;

        if (i > farthest)
        {
            break;
        }

        if (array[i] > size - 1 - i)
        {
            reach = size - 1;
        }
        else
        {
            reach = i + array[i];
        }
        if (reach > farthest)
        {
            farthest = reach;
        }

        if (i == currentEnd)
        {
            if (farthest == currentEnd)
            {
                break;
            }

            jumps++;
            currentEnd = farthest;
        }
    }

    if (size == 1)
    {
        printf("Minimum number of jumps: 0\n");
    }
    else if (currentEnd >= size - 1)
    {
        printf("Minimum number of jumps: %d\n", jumps);
    }
    else
    {
        printf("The last element cannot be reached.\n");
    }

    free(array);
    return 0;
}
