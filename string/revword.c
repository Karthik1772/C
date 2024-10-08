#include <stdio.h>
#include <stdlib.h>
int reverse_word(char *p)
{
    int z;
    if (*p == ' ')
        z = 0;
    else if (*p == '\0')
        z = 0;
    else
        z = reverse_word(p + 1) + 1;
    if (z)
        putchar(*p);
    return z;
}
int main()
{
    int a;
    char *p = (char *)malloc(100 * sizeof(char));
    scanf("%[^\n]s", p);
    while (*p)
    {
        a = reverse_word(p);
        p = p + a;
        if (*p == ' ')
        {
            putchar(' ');
            p++;
        }
    }

    return 0;
}