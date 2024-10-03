//prgm to fing length of string
#include<stdio.h>
int main()
{
    char str[100];
    int i,count=0;
    printf("Enter the string : ");
    scanf("%s",&str);
    for(i=0;str[i];i++)
    {
        count++;
    }
    printf("%d",count);
}