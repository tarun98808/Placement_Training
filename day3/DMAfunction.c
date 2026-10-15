#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int count;

    printf("How many numbers? ");
    if (scanf("%d", &count) != 1 || count <= 0) {
        printf("Please enter a positive number.\n");
        return 1;
    }

    int *ptr = malloc(count * sizeof *ptr);
    if (ptr == NULL) {
        printf("Memory allocation failed.\n");
        return 1;
    }

    printf("Enter %d numbers:\n", count);
    for (int i = 0; i < count; i++) {
        scanf("%d", ptr + i);  // input through the pointer
    }

    printf("Numbers: ");
    for (int i = 0; i < count; i++) {
        printf("%d ", *(ptr + i));  // output through the pointer
    }
    printf("\n");

    free(ptr);  // release the allocated memory
    return 0;
}