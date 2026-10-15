#include <stdio.h>

int nested(int n) {
    if (n > 100) {
        return n - 10;
    }

    return nested(nested(n + 11));
}

int main() {
    int result = nested(95);
    printf("Result: %d\n", result);
    return 0;
}
