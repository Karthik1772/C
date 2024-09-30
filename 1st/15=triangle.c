#include<stdio.h>
void main()
{
int a,b,c;
printf("enter the sides\n");
scanf("%d%d%d",&a,&b,&c);
if (a==b && b==c)
printf("equilateral triangle");
else if (a==b && b!=c)
printf("isocelous triangle");
else
printf("scalar triangle");
}
