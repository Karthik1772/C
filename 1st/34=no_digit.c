#include<stdio.h>
void main(){
long num;
int count=0;
printf("enter the number");
scanf("%lD",&num);
while(num!=0){
num=num/10;
count++;
}
printf("the no of digits is %d",count);
}
