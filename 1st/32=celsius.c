//Convert fahrenheit to celsius.//
#include<stdio.h>
void main()
{
float f;
printf("Enter the fahrenheit degree : ");
scanf("%f",&f);
float fahrenheit = (f-32)*(0.556);
printf("celsius degree is %f",fahrenheit);
}
