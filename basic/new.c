#include <stdio.h>

int main()
{
    int a, b, result = 0; // a=10 b=5
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    while (b > 0)
    {
        result = result | a; // Same as result += num1
        b--;
    }
    printf("The result is: %d\n", result);

    return 0;
}
