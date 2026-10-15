#include<stdio.h>
int main(){
	int n, row, column;

	printf("Enter the number of rows: ");
	if (scanf("%d", &n) != 1 || n <= 0) {
		printf("Enter a positive integer.\n");
		return 1;
	}

	for (row = 1; row <= n; row++) {
		for (column = 1; column <= row; column++) {
			if (column == 1 || column == row || row == n) {
				printf("*");
			} else {
				printf(" ");
			}
		}
		printf("\n");
	}

	return 0;
}
