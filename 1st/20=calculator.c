#include<stdio.h>
void main()
{
int a,b;
char x;
printf("enter the operation");
scanf("%c",&x);
printf("enter the no");
scanf("%d%d",&a,&b);
switch(x)
{
case'+':
printf("sum is = %d",a+b);
break;
case'-':
printf("diff is = %d",a-b);
break;
case'*':
printf("mult is = %d",a*b);
break;
case'/':
printf("div is = %d",a/b);
break;
case'%':
printf("mod is = %d",a%b);
break;
default:
printf("invalid operation");
}
}
