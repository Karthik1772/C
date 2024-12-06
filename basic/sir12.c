// Write a program to check whether a given number is prime or not.
#include <stdio.h>
int main()
{
    int n, i, count;
    printf("Enter the number:");
    scanf("%d", &n);
    count = 0;
    for (i = 2; i <= n / 2; i++)
    {
        if (n % i == 0)
        {
            count = 1;
        }
    }
    if (count == 0)
    {

        printf("The number is prime");
    }
    else
    {
        printf("The number is not prime");
    }
}