// write a program to find the index of sub string in main string
#include <stdio.h>
int main()
{
    char s1[30], s2[30];
    int i, j, len1 = 0, len2 = 0, flag;
    printf("enter the string: ");
    scanf("%[^\n]s", s1);

    while (getchar() != '\n');

    printf("enter the sub-string: ");
    scanf("%[^\n]s", s2);

    for (i = 0; s1[i]; i++);
    len1 = i;

    for (i = 0; s2[i]; i++);
    len2 = i;

    for (i = 0; i <= (len1 - len2); i++)
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
            printf("\nsubstring: %d", i);
    }

    return 0;
}