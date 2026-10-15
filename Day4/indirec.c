#include <stdio.h>

int functionA(int n);
int functionB(int n);

int functionA(int n) {
    if (n <= 0) {
        return 0;
    }

    printf("A: %d\n", n);
    return functionB(n - 1);
}

int functionB(int n) {
    if (n <= 0) {
        return 0;
    }

    printf("B: %d\n", n);
    return functionA(n - 1);
}

int main() {
    int value = 5;

    printf("Indirect recursion example:\n");
    functionA(value);

    return 0;
}