// Write a program to check the given number is a palindrome or not.
#include <stdio.h>
int main()
{
    int n, rem = 0, num, new = 0;
    printf("enter the n value ");
    scanf("%d", &n);
    num = n;
    while (n != 0)
    {
        rem = n % 10;
        n = n / 10;
        new = new * 10 + rem;
    }
    if (num == new)
    {
        printf("palindrome");
    }
}