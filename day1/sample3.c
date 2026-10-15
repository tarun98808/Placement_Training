#include<stdio.h>
int main()
{
    int notes[7] = {100, 50, 20, 10, 5, 2, 1};
    int bill, paid, amount;
    int i, count[7] = {0}; 
    scanf("%d %d", &bill, &paid);
    if (bill < 0 || paid < 0)
    {
        printf("Please enter non-negative amounts.\n");
        return 1;
    }
    if (paid < bill)
    {
        printf("Payment is not enough. Amount still owed: %d rupees\n", bill - paid);
        return 1;
    }
    amount = paid - bill;

    for (i = 0; i < 7; i++)
    {
        count[i] = amount / notes[i];
        amount %= notes[i];
    }

    printf("Change to return: %d rupees\n", paid - bill);
    for (i = 0; i < 7; i++)
    {
        if (count[i] > 0)
        {
            printf("%d rupee notes/coins: %d\n", notes[i], count[i]);
        }
    }

    return 0;

    
    
}