//prints the factorial of a number
#include<stdio.h>
#define modulo 1000000007;
int fact(int n);
int main()
{
    unsigned long int num,sum;
    printf("enter the number : ");
    scanf("%d",&num);
    printf("the factorial of %d is : %d",num,fact(num));
}
int fact(int n)
{
    int fact=1;
    for(int i=1;i<=n;i++)
    {
        fact=(fact*i)%modulo;
    }
    return fact;
}