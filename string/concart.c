// Concatenation of two strings without using building function

#include <stdio.h>
#include <string.h>
int count(char s[100]);
int main()
{
    char s1[100], s2[100];
    int i, len1, len2;
    printf("enter 1st part:-");
    scanf("%s", s1);
    printf("enter 2nd part:-");
    scanf("%s", s2);

    len1 = count(s1);
    len2 = count(s2);

    for (i = 0; i <= len2; i++)
    {
        s1[len1 + i] = s2[i];
    }

    printf("concatinate:%s", s1);

    return 0;
}
int count(char s[100])
{
    int i, count = 0;
    for (i = 0; s[i]; i++)
        count++;
    return count;
}
