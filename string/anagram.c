// check two strings are anagram to each other
//  s1->"silent"
//  s2->"listen"
// same size same alphabets but different placements
#include <stdio.h>
int main()
{
    char s1[30], s2[30];
    int i, c[26] = {0}, flag = 0;
    printf("enter the first string: ");
    scanf("%[^\n]s", s1);

    while (getchar() != '\n')
        ;

    printf("enter the second string: ");
    scanf("%[^\n]s", s2);

    for (i = 0; s1[i]; i++)
    {
        if (s1[i] >= 65 && s1[i] <= 90)
            c[s1[i] - 'A']++;

        if (s1[i] >= 97 && s1[i] <= 122)
            c[s1[i] - 'a']++;
    }

    for (i = 0; s2[i]; i++)
    {
        if (s2[i] >= 65 && s2[i] <= 90)
            c[s2[i] - 'A']--;

        if (s2[i] >= 97 && s2[i] <= 122)
            c[s2[i] - 'a']--;
    }

    for (i = 0; i < 26; i++)
    {
        if (c[i] != 0)
        {
            flag = 1;
            break;
        }
    }

    if (flag)
    {
        printf("not");
    }
    else
    {
        printf("anagram");
    }
    return 0;
}