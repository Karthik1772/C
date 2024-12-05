//Write a program to compute 1/n!.
#include<stdio.h>
void main()
{
    int n;
    float res,fact=1;
    printf("enter the n value");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        fact=fact*i;
    }
    printf("%f\n",fact);
    res=1/fact;
    printf("%f",res);
}