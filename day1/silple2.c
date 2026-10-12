#include<stdio.h>
int main()
{
	int bill, paid, amount;
	int hundreds, fifties, twenties, tens, twos, ones;

	printf("Enter the bill amount in rupees: ");
	scanf("%d", &bill);
	printf("Enter the amount paid in rupees: ");
	scanf("%d", &paid);

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
	printf("Change to return: %d rupees\n", amount);

	hundreds = amount / 100;
	amount %= 100;
	fifties = amount / 50;
	amount %= 50;
	twenties = amount / 20;
	amount %= 20;
	tens = amount / 10;
	amount %= 10;
	twos = amount / 2;
	ones = amount % 2;

	printf("100 rupee notes: %d\n", hundreds);
	printf("50 rupee notes: %d\n", fifties);
	printf("20 rupee notes: %d\n", twenties);
	printf("10 rupee notes: %d\n", tens);
	printf("2 rupee coins: %d\n", twos);
	printf("1 rupee coins: %d\n", ones);

	return 0;

}