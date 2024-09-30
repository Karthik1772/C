//gives the highest common factor between 2 numbers
#include <stdio.h>
int gcd(int a, int b);
int main()
{
    int a, b;
    printf("enter the 2 no");
    scanf("%d%d", &a, &b);
    printf("the Greatest Common divisor is %d", gcd(a, b));
}
int gcd(int a, int b)
{
    if (a % b == 0)
        return b;
    else
        return gcd(b, a % b);
}