// Write a program to calculate the LCM of two numbers.
#include <stdio.h>
int main()
{
    int count = 1, num1, num2, gcd;
    scanf("%d%d", &num1, &num2);
    while (count <= num1 && count <= num2)
    {
        if (num1 % count == 0 && num2 % count == 0)
        {
            gcd = count;
        }
        count++;
    }
    printf("GCD of %d and %d is %d", num1, num2, gcd);
}