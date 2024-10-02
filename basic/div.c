#include <stdio.h>
int main()
{
    int n, i, sum = 0;
    printf("enter the last number ");
    scanf("%d", &n);
    for (i = 0; i <= n; i++)
    {
        if (i % 7 == 0)
            sum = sum + i;
    }
    printf("sum of number divisible by 7 is %d", sum);
    return 0;
}