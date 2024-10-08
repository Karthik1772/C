//write a program to reverse a string using recursion
#include<stdio.h>
void reverse(char *p)
{
    if(*p!='\0')
    {
        reverse(p+1);
        putchar(*p);
    }
}
int main()
{
    char s1[100];
    printf("Enter the string  : ");
    scanf("%s",s1);
    printf("the reverse sting is : ");
    reverse(s1);

    return 0;
}
