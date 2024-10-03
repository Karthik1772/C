//prgm to reverse string
#include<stdio.h>
int main()
{
    char str[100],rtr[100];
    int count=0,i;
    printf("enter the string : ");
    scanf("%[^\n]s",str);
    for(i=0;str[i];i++)
        count++;
    for(i=0;str[i];i++)
    {
        rtr[count-i-1]=str[i];
    }
    rtr[i]='\0';
    printf("%s",rtr);
}