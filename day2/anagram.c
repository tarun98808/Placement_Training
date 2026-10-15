#include <stdio.h>
#include <string.h>

int main(void)
{
    char first[100];
    char second[100];
    int isAnagram = 1;

    printf("Enter the first word: ");
    scanf("%99s", first);

    printf("Enter the second word: ");
    scanf("%99s", second);

    if (strlen(first) != strlen(second)) {
        isAnagram = 0;
    } else {
        for (int i = 0; first[i] != '\0'; i++) {
            int firstCount = 0;
            int secondCount = 0;

            for (int j = 0; first[j] != '\0'; j++) {
                if (first[i] == first[j]) {
                    firstCount++;
                }
                if (first[i] == second[j]) {
                    secondCount++;
                }
            }

            if (firstCount != secondCount) {
                isAnagram = 0;
                break;
            }
        }
    }


    if (isAnagram) {
        printf("The words are anagrams.\n");
    } else {
        printf("The words are not anagrams.\n");
    }

    return 0;
}