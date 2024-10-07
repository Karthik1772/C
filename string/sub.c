// write a program to search substring in main string without builtin function
#include <stdio.h>
int main()
{
    char s1[100], s2[100];
    int len1 = 0, len2 = 0, i, j, flag = 0;
    printf("enter the main string : ");
    scanf("%[^\n]s", s1);
    while (getchar() != '\n');
    printf("enter the sub string : ");
    scanf("%[^\n]s", s2);
    for (i = 0; s1[i]; i++)
    len1 = i;
    for (i = 0; s2[i]; i++)
    len2 = i;
    for (i = 0; i < (len1 - len2); i++)
    {
        for (j = i; j < (i + len2); j++)
        {
            flag = 0;
            if (s1[j] != s2[j - i])
            {
                flag = 1;
                break;
            }
        }
        if (flag == 0)
            break;
    }
    if (flag == 1)
        printf("found");
    else
        printf("not found");
}