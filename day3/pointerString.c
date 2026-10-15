#include<stdio.h>
int main ()
{
    char str[20];
    char *ptr = str;

    printf("Enter a string: ");
    scanf("%s", ptr);

    printf("String entered: %s\n", ptr);
    printf("Address of str: %p\n", (void*)ptr);

    return 0;
}