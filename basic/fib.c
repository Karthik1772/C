// this program the gives the fibonacci no upto n no
#include <stdio.h>
int main()
{
    int fib1 = 0, fib2 = 1, fib = 0, n;
    printf("enter the last number");
    scanf("%d", &n);
    if (n == 0)
    {
        printf("no fibonacii series  ");
    }
    else if (n == 1)
    {
        printf("fibonacii series is %d", fib1);
    }
    else
    {
        printf("fibonacii series is %d %d", fib1, fib2);
        for (int i = 0; i < n - 2; i++)
        {
            fib = fib1 + fib2;
            printf(" %d", fib);
            fib1 = fib2;
            fib2 = fib;
        }
    }
    return 0;
}