#include <stdio.h>

int main() {
    int arr[5];
    int *ptr = arr;

    printf("Enter 5 numbers:\n");
    for (int i = 0; i < 5; i++) {
        scanf("%d", ptr + i);
    }

    printf("\nThe numbers are:\n");
    for (int i = 0; i < 5; i++) {
        printf("%d%d\n", *(ptr + i),(ptr + i));
    }

    return 0;
}