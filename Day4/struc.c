
#include <stdio.h>
#include <stdlib.h>

struct Ticket {
    long ticketNo;
    char vehicleNo[30];
    float grossWeight;
    float tareWeight;
};

float getNetWeight(const struct Ticket *t) {
    return t->grossWeight - t->tareWeight;
}

void printTicket(const struct Ticket *t) {
    printf("%ld %s gross %.2f tare %.2f\n",
           t->ticketNo, t->vehicleNo,
           t->grossWeight, t->tareWeight);

    printf("net %.2f\n", getNetWeight(t));
}

int main() {
    int N, i, maxIndex = 0;
    double total = 0.0;

    if (scanf("%d", &N) != 1 || N <= 0 || N > 100000) {
        printf("INVALID COUNT\n");
        return 0;
    }

    struct Ticket *t = malloc((size_t)N * sizeof(*t));

    if (t == NULL) {
        fprintf(stderr, "Memory allocation failed.\n");
        return 1;
    }

    for (i = 0; i < N; i++) {
        if (scanf("%ld %29s %f %f",
              &t[i].ticketNo,
              t[i].vehicleNo,
              &t[i].grossWeight,
              &t[i].tareWeight) != 4) {
            fprintf(stderr, "Invalid ticket data.\n");
            free(t);
            return 1;
        }
    }

    printf("WEIGHBRIDGE DAY BOOK\n");

    for (i = 0; i < N; i++) {
        printTicket(&t[i]);

        total += getNetWeight(&t[i]);

        if (getNetWeight(&t[i]) >
            getNetWeight(&t[maxIndex])) {
            maxIndex = i;
        }
    }

    printf("Tickets: %d\n", N);
    printf("Total net weight (kg): %.2f\n", total);

    printf("Heaviest net load: ticket %ld %s\n",
           t[maxIndex].ticketNo,
           t[maxIndex].vehicleNo);

    printf("%.2f\n", getNetWeight(&t[maxIndex]));

    free(t);

    return 0;
}
