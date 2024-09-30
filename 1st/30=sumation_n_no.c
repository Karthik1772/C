#include<stdio.h>
void main()
{
int a,n,sum=0;
printf("enter the start and end no");
scanf("%d%d",&a,&n);
for(;a<=n;a++)
{
sum=sum+a;
}
printf("sum = %d",sum);
}
