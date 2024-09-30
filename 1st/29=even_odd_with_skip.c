#include<stdio.h>
void main()
{
int a;
printf("enter the no");
scanf("%d",&a);
while(a<=100)
{
if(a%2!=0)
{
printf("%d\n",a);
}
a++;
}
}
