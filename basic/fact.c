//Write a program to compute factorial
#include<stdio.h>
void main()
{
    int n,fact=1;
    printf("enter the n value");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        fact=fact*i;
    }
    printf("%f\n",fact);
}