#include<stdio.h>
int main(){
    int n, row, column;
    printf("Enter a number: ");
    if (scanf("%d", &n) != 1 || n <= 0) {
        printf("Enter a positive integer.\n");
        return 1;
    }

    for (row = 0; row < n; row++) {
        for (column = 0; column < n; column++) {
            if (row == 0 || row == n - 1 || column == 0 || column == n - 1) {
                printf("*  ");
            } else {
                printf("   ");
            }
        }
        printf("\n");
    }

    return 0;
}