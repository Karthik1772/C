// write program to find sum of even no and odd no up to N
#include <stdio.h>
int main()
{
    int n, odd = 0, even = 0, i;
    printf("enter the last number ");
    scanf("%d", &n);
    for (i = 0; i <= n; i++)
    {
        if (i % 2 == 0)
            even = even + i;
        else
            odd = odd + i;
    }
    printf("the odd sum is %d\n", odd);
    printf("the even sum is %d\n", even);
    return 0;
}