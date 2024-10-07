// Replace the vowles in 'X' and digits in 'O'
#include <stdio.h>
int main()
{
    char str[100];
    int i, x;

    printf("enter :- ");
    scanf("%s", str);
    for (i = 0; str[i]; i++)
    {
        if (str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U' || str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u')
            str[i] = 'X';
        else if (str[i] >= '0' && str[i] <= '9')
            str[i] = 'O';
    }
    printf("replace the vowles with X :- %s\n", str);
    printf("replace the digits with O :-%s\n", str);
    return 0;
}