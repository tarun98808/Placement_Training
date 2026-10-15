#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    long long input;
    unsigned long long number;
    int *frequency = malloc(10 * sizeof(*frequency));

    if (frequency == NULL)
    {
        printf("Memory allocation failed.\n");
        return 1;
    }

    for (int digit = 0; digit < 10; digit++)
        *(frequency + digit) = 0;

    printf("Enter an integer: ");
    if (scanf("%lld", &input) != 1)
    {
        printf("Invalid input.\n");
        free(frequency);
        return 1;
    }

    /* Convert safely, including the minimum long long value. */
    number = input < 0
        ? 0ULL - (unsigned long long)input
        : (unsigned long long)input;

    if (number == 0)
    {
        (*(frequency + 0))++;
    }
    else
    {
        while (number > 0)
        {
            int digit = (int)(number % 10);
            (*(frequency + digit))++;
            number /= 10;
        }
    }

    printf("Digit frequencies:\n");
    for (int digit = 0; digit < 10; digit++)
        printf("%d: %d\n", digit, *(frequency + digit));

    free(frequency);
    return 0;
}