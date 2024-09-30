#include<stdio.h>
#include<math.h>
void main()
{
int b,n,result=0;
printf("enter the last no and power no");
scanf("%d%d",&b,&n);
for(int a=1;a<=b;a++)
{
result=result+pow(a,n);
printf("%d ",result);
}
}
