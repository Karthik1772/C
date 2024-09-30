//this program checks wheather the data is digit or not
#include<stdio.h>
#include<ctype.h>  //used for isdigit
void main()
{
char n;
printf("enter the data");
scanf("%c",&n);
if(isdigit(n))
{
printf("it is a digit");
}
else
{
printf("it is not a digit");
}
}
