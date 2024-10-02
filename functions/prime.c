// prints wheter the given no is prime no or not
#include <stdio.h>
void function(int n);
int main()
{
    int num, flag = 0;
    printf("enter the number : ");
    scanf("%d", &num);
    function(num);
}
void function(int n)
{
    int a, flag = 0;
    for (a = 2; (a * a) <= n; a++)
    {
        if (n % a == 0)
        {
            flag = 1;
            break;
        }
    }
    if (flag == 1)
        printf("composite");
    else
        printf("prime");
}