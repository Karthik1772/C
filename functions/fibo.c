#include <stdio.h>
#include <math.h>

int Square(int x);
int Fibonacci(int n);

int main()
{
    int num;
    printf("Enter the number: ");
    scanf("%d", &num);

    if (Fibonacci(num))
        printf("%d is a Fibonacci number \n", num);
    else
        printf("%d is not a Fibonacci number \n", num);

    return 0;
}

int Square(int x)
{
    int s = sqrt(x);
    return (s * s == x);
}

int Fibonacci(int n)
{
    return Square((5 * n * n) + 4) || Square((5 * n * n) - 4);
}
