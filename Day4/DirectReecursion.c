#include<stdio.h>
void print(int n)
{
    if(n>5)
    {
        printf("%d ",n);
        print(n+1);
    }
}
int main()
{
    int n=1;
    print(n);
    return 0;
}
 