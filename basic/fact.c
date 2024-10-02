// give the factorial of the number
#include <stdio.h>
#define modulo 1000000007; // in order to controll over flow of int
int main()
{
    int n, i;
    unsigned long int res = 1;
    printf("enter the number");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        res = (res * i) % modulo;
    }
    printf("the factorial of %d is %ld", n, res);
    return 0;
}