#include <stdio.h>

int main(void)
{
    char text[100];

    printf("Enter a string: ");
    scanf("%99s", text);

    for (int i = 0; text[i] != '\0'; i++) {
        int alreadyPrinted = 0;

        for (int j = 0; j < i; j++) {
            if (text[i] == text[j]) {
                alreadyPrinted = 1;
                break;
            }
        }

        if (!alreadyPrinted) {
            int frequency = 0;
            for (int j = 0; text[j] != '\0'; j++) {
                if (text[i] == text[j]) {
                    frequency++;
                }
            }

            printf("%c: %d\n", text[i], frequency);
        }
    }

    return 0;
}
