//Write a program to sum all digits of a number.
#include<stdio.h>
int main()
{
    int n,rem=0,sum=0;
    printf("enter the n value ");
    scanf("%d",&n);
    while(n!=0)
    {
        rem=n%10;
        n=n/10;
        sum=sum+rem;
    }
    printf("%d",sum);
}