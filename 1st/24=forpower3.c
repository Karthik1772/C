#include<stdio.h>
#include<math.h>
void main()
{
int b,n,result;
printf("enter the last no and power no");
scanf("%d%d",&b,&n);
for(int a=1;a<=b;a++)
{
result=pow(a,n);
printf("%d power is %d\n",a,result);
}
}
