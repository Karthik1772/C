#include<stdio.h>
void main()
{
int b,fact=1,a=1;
printf("enter the no ");
scanf("%d",&b);
for(;a<=b;a++)
{
fact=fact*a;
}
printf("factorial is  %d\n",fact);
}
