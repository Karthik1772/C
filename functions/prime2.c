#include <stdio.h>
int function(int n);
int main()
{
    int num, flag = 0;
    printf("enter the last : ");
    scanf("%d", &num);
    for(int i =2;i<num;i++)
    {
        if(function(i)==0)
            printf("%d\t",i);
    }
}
int function(int n)
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
        return 1;
    else
        return 0;
}