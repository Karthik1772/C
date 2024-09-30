// program to reverse a number
#include <stdio.h>
int main()
{
    int num, rev = 0,rem=0,num1;
    printf("enter the number : ");
    scanf("%d", &num); // 143
    num1=num;
    while (num>0)
    {

        rem = num % 10;
        rev = rev * 10 + rem;
        num = num / 10;
    }
    if(num1==rev)
    {
        printf("its a palindrome");
    }
    return 0;
}