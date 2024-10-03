// prgm to print whether the given string is palindrome or not
#include <stdio.h>
int main()
{
    char str[100], rtr[100];
    int count = 0, i, flag = 0;
    printf("enter the string : ");
    scanf("%[^\n]s", str);
    for (i = 0; str[i]; i++)
        count++;
    for (i = 0; str[i]; i++)
    {
        rtr[count - i - 1] = str[i];
    }
    rtr[i] = '\0';
    for (i = 0; i < count; i++)
    {
        if (str[i] != rtr[i])
        {
            flag = 1;
            break;
        }
    }
    if (flag == 0)
        printf("palindrome");
    else
        printf("not palindrome");
}

// check for a palindrome or not
// #include <stdio.h>
// int main()
// {
//     char str[100], ch;
//     int i, len = 0, flag = 0;
//     printf("enter the string: ");
//     scanf("%[^\n]s", str);
//     for (i = 0; str[i]; i++)
//         ;
//     len = i;
//     for (i = 0; i <= (len / 2); i++)
//     {
//         if (str[i] != str[len - i - 1])
//         {
//             flag = 1;
//             break;
//         }
//     }
//     if (flag)
//         printf("not a palindrome");
//     else
//         printf("palindrome");
//         return 0;
// }