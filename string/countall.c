// program to count consonants vowels special char
#include <stdio.h>
int main()
{
    char str[100];
    int i, count_c = 0, count_v = 0, count_s = 0;
    printf("enter the string : ");
    scanf("%[^\n]s", str);
    for (i = 0; str[i]; i++)
    {
        if (str[i] == 'a' || str[i] == 'A' || str[i] == 'e' || str[i] == 'E' ||str[i] == 'i' || str[i] == 'I' ||str[i] == 'o' || str[i] == 'O'|| str[i] == 'u' || str[i] == 'U')
            count_v++;
        else if (str[i] >= 65 && str[i] <= 90 || str[i] >= 97 && str[i] <= 122)
            count_c++;
        else
            count_s++;
    }
    printf("number of vowels = %d\nnumber of consonants = %d\nnumber of special char = %d\n", count_v, count_c, count_s);
}