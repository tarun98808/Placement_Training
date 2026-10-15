
#include <stdio.h>

int main() {
    int n, a[20][20];
    int top, bottom, left, right;
    int num = 1;

    printf("Enter n: ");
    scanf("%d", &n);

    top = 0;
    bottom = n - 1;
    left = 0;
    right = n - 1;

    while (top <= bottom && left <= right) {

        // Left to right
        for (int j = left; j <= right; j++)
            a[top][j] = num++;
        top++;

        // Top to bottom
        for (int i = top; i <= bottom; i++)
            a[i][right] = num++;
        right--;

        // Right to left
        for (int j = right; j >= left && top <= bottom; j--)
            a[bottom][j] = num++;
        bottom--;

        // Bottom to top
        for (int i = bottom; i >= top && left <= right; i--)
            a[i][left] = num++;
        left++;
    }

    printf("Spiral Matrix:\n");

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++)
            printf("%d\t", a[i][j]);
        printf("\n");
    }

    return 0;
}
