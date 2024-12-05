// Write a program to reverse a given number.
#include <stdio.h>
int main()
{
    int n, rem = 0, new = 0;
    printf("enter the n value ");
    scanf("%d", &n);
    while (n != 0)
    {
        rem = n % 10;
        n = n / 10;
        new = new * 10 + rem;
    }
    printf("%d", new);
}