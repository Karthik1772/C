#include <stdio.h>
int main()
{
    int num, i, flag = 0;
    printf("Enter number:");
    scanf("%d", &num);
    for (i = 2; (i * i) <= num; i++)
    {
        if (num % i == 0)
        {
            flag = 1;
            break;
        }
    }
    if (flag == 1)
    {
        printf("composite");
    }
    else
    {
        printf("prime");
    }
    return 0;
}