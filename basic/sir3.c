//Write a program to compute x^n/n!
#include<stdio.h>
int main()
{
    int x,n;
    float fact=1,res;
    printf("enter the x and n values");
    scanf("%d%d",&x,&n);
    for(int i=0;i<n;i++)
    {
        fact=fact*i;
    }
    res=(x^n)/(fact);
    printf("%d",res);
}