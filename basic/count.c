//program to print no of elements in a no
#include <stdio.h>
int main()
{
    long long int num;
    int count = 0;
    printf("enter the number :");
    scanf("%lld", &num);
    while (num != 0)
    {
        num = num / 10;
        count++;
    }
    printf("%d", count);
    return 0;
}