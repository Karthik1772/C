// program to reverse a number
#include <stdio.h>
int main()
{
    int num, rev = 0, rem = 0;
    printf("enter the number : ");
    scanf("%d", &num); // 143
    printf("the reverse of %d is", num);
    while (num > 0)
    {

        rem = num % 10;
        rev = rev * 10 + rem;
        num = num / 10;
    }
    printf(" %d", rev);
    return 0;
}