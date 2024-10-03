// prgm to find whether the given  char is present in string or not
#include <stdio.h>
int main()
{
    char str[100];
    char ch, flag = 0;
    int i;
    printf("enter the string : ");
    scanf("%d", str);
    while (getchar() != '\n');
    printf("enter the character : ");
    scanf("%c",&ch);
        for (i = 0; str[i]; i++)
        {
            if (ch == str[i])
                flag = 1;
                break;
        }
    if (flag == 1)
        printf("present");
    else
        printf("not present");
}