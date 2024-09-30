#include<stdio.h>
void main()
{
char x;
int c;
printf("enter the character");
scanf("%c",&x);
if (x=='a' || x=='e' || x=='i' || x=='o' || x=='u')
{
c=1;
}
else
{
c=2;
}
switch(c)
{
case 1:
printf("its a vowel");
break;
case 2:
printf("its a consonent");
break;
}
}
