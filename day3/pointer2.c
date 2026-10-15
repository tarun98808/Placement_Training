#include<stdio.h>
int main()
{
    int arr[4];
    int *ptr = arr;

    printf("Enter 4 numbers: ");
    for(int i = 0; i < 4; i++) {
        scanf("%d", ptr + i);
    }

    printf("Values entered: ");
    for(int i = 0; i < 4; i++) {
        printf("%d %d ", *(ptr + i),(ptr+i));
    }

    return 0;
}