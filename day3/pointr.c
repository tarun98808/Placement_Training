#include <stdio.h>

int main() {
    int n;
    int *ptr = &n;

    printf("Enter a number: ");
    scanf("%d", ptr);

    printf("Address of n: %p\n", (void*)&n);
    printf("Value of n: %d\n", n);

    return 0;
}