#include<stdio.h>
void main()
{
int a,b,c;
printf("enter the 2 no");
scanf("%d%d",&a,&b);
c=a;
a=b;
b=c;
printf("no after interchange is %d %d ",a,b);
}
