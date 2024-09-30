#include<stdio.h>
void main()
{
int a,b,c,result;
printf("enter the base no\n");
scanf("%d",&a);
printf("enter the start and end no");
scanf("%d%d",&b,&c);
while(b<=c)
{
result=a*b;
printf("%d\n",result);
b++;
}
}
