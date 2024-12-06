// Write a Program to calculate prime Factors of number.
#include <stdio.h>
int main()
{
    int n, i, j, count;
    printf("Enter the number:");
    scanf("%d", &n);

    for (i = 2; i <= n; i++)
    {
        count = 0;
        if (n % i == 0)
        {
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
    }
}