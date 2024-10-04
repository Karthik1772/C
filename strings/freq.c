// count frequency of character
#include <stdio.h>
int main()
{
    char str[100];
    int i, c[26] = {0}, len = 0;
    printf("enter the string: ");
    scanf("%[^\n]s", str);
    for (i = 0; str[i]; i++);
        len = i;

    for (i = 0; str[i]; i++)
    {
        if (str[i] >= 65 && str[i] <= 90)
            c[str[i] - 'A']++;

        if (str[i] >= 97 && str[i] <= 122)
            c[str[i] - 'a']++;
    }

    for (i = 0; i < 26; i++)
    {
        if (c[i] > 0)
            printf("%c(%d) ", i + 65, c[i]);
    }

    printf("\n");

    for (i = 0; str[i]; i++)
    {
        if (str[i] >= 65 && str[i] <= 90)
        {
            if (c[str[i] - 'A'] > 0)
            {
                printf("%c(%d) ", str[i], c[str[i] - 'A']);
                c[str[i] - 'A'] = 0;
            }
        }
        if (str[i] >= 97 && str[i] <= 122)
        {
            if (c[str[i] - 'a'] > 0)
            {
                printf("%c(%d) ", str[i], c[str[i] - 'a']);
                c[str[i] - 'a'] = 0;
            }
        }
    }
    return 0;
}