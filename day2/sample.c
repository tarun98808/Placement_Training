#include <stdio.h>
int main(void)
{
    int numberOfPiles;
    long long piles[100];
    long long hours;
    long long largestPile = 0;

    printf("Enter the number of piles (maximum 100): ");

    if (scanf("%d", &numberOfPiles) != 1 ||
        numberOfPiles < 1 || numberOfPiles > 100) {
        printf("Invalid number of piles.\n");
        return 1;
    }

    printf("Enter the bananas in each pile: ");

    for (int i = 0; i < numberOfPiles; i++) {
        if (scanf("%lld", &piles[i]) != 1 || piles[i] <= 0) {
            printf("Each pile must contain a positive number of bananas.\n");
            return 1;
        }
        if (piles[i] > largestPile) {
            largestPile = piles[i];
        }
    }

    printf("Enter the number of hours: ");
    
    if (scanf("%lld", &hours) != 1 || hours < numberOfPiles) {
        printf("There must be at least one hour for each pile.\n");
        return 1;
    }

    long long low = 1;
    long long high = largestPile;

    while (low < high) {
        long long speed = low + (high - low) / 2;
        long long hoursNeeded = 0;

        for (int i = 0; i < numberOfPiles; i++) {
            hoursNeeded += piles[i] / speed;
            if (piles[i] % speed != 0) {
                hoursNeeded++;
            }
            if (hoursNeeded > hours) {
                break;
            }
        }

        if (hoursNeeded <= hours) {
            high = speed;
        } else {
            low = speed + 1;
        }
    }

    printf("Minimum eating speed: %lld bananas per hour\n", low);
    return 0;
}