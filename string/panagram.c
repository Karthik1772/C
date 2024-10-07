// write a program to check the given string is panagram or not
// s1-> "the quick brown fox jumps over the lazy dog"
// string which contains all the alphabets from a to z
#include <stdio.h>
int main()
{
    char s1[256];
    int i, c[26] = {0}, flag = 0;
    printf("enter the string: ");
    scanf("%[^\n]s", s1);

    for (i = 0; s1[i]; i++)
    {
        if (s1[i] >= 65 && s1[i] <= 90)
            c[s1[i] - 'A']++;

        if (s1[i] >= 97 && s1[i] <= 122)
            c[s1[i] - 'a']++;
    }

    for (i = 0; i < 26; i++)
    {
        if (c[i] == 0)
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
        printf("panagram");
    }
    return 0;
}