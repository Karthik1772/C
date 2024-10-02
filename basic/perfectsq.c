// printd the perfect square till n no
#include <stdio.h>
int main()
{
    int num;
    printf("enter the number");
    scanf("%d", &num);
    for (int i = 0; i <= num; i++)
    {
        printf("%d\t", i * i);
    }
}