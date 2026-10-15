#include <limits.h>
#include <stdio.h>

int main(void)
{
    int count, index;
    unsigned long long first = 0, second = 1, next;

    printf("Enter the number of terms: ");
    if (scanf("%d", &count) != 1 || count <= 0) {
        printf("Enter a positive integer.\n");
        return 1;
    }

    printf("Fibonacci series: ");
    for (index = 0; index < count; index++) {
        printf("%llu", first);
        if (index + 1 == count) {
            break;
        }
        printf(" ");

        if (second > ULLONG_MAX - first) {
            printf("\nThe next term is too large to represent.\n");
            return 1;
        }

        next = first + second;
        first = second;
        second = next;
    }

    printf("\n");
    return 0;
}