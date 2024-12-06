// Write a program to check whether a given number is prime or not.
#include <stdio.h>
int main()
{
    int n, i, j, count;
    printf("Enter the number:");
    scanf("%d", &n);
    for (j = 2; j <= i / 2; j++)
    {
        if (i % j == 0)
        {
            count++;
        }
    }
    if (count == 0)
    {
        printf("%d\t", i);
    }
}