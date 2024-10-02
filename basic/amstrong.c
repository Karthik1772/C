// checks whether the given number is amstrong or not
#include <stdio.h>
#include <math.h>
int main()
{
    int num, num1, num2, count = 0, rem = 0, arm = 0;
    printf("enter the number : ");
    scanf("%d", &num);
    ` num1 = num2 = num;
    while (num > 0)
    {
        num = num / 10;
        count++;
    }
    while (num2 > 0)
    {
        rem = num2 % 10;
        num2 = num2 / 10;
        arm = arm + pow(rem, count);
    }
    printf("%d\n", arm);
    if (arm == num1)
    {
        printf("amstorng no");
    }
    else
    {
        printf("not");
    }
    return 0;
}