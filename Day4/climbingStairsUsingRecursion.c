#include <stdio.h>

int countWays(int n) {
    if (n == 0) {
        return 1; // one way to stand at the ground
    }
    if (n < 0) {
        return 0; // invalid negative steps
    }

    return countWays(n - 1) + countWays(n - 2);
}

int main() {
    int stairs = 5;
    printf("Number of ways to climb %d stairs: %d\n", stairs, countWays(stairs));
    return 0;
}
