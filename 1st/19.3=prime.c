#include<stdio.h>
void main()
{
int a;
printf("enter the number\n");
scanf("%d",&a);
if(a==3 || a==5 || a==7)
{
printf("is a prime no");
exit(0);
}
if(a%3==0 || a%5==0 || a%7==0)
{
printf("its not a prime no"); 
}
else 
{
printf("its a prime no");
}
}

