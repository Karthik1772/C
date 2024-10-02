#include <stdio.h>
int seieve(int x);
int main()
{
    int n;
    printf("enter the last number : ");
    scanf("%d", &n);
    seieve(n);
    return 0;
}
int seieve(int x)
{
    int prime[x + 1];
    int i, j;
    for (i = 0; i <= x; i++)
    {
        prime[i] = 1;
    }
    for (i = 2; i <= x; i++)
    {
        if (prime[i] == 1)
        {
            for (j = i * i; j <= x; j = j + i)
            {
                prime[j] = 0;
            }
        }
    }
    for (i = 2; i < x; i++)
    {
        if (prime[i] == 1)
        {
            printf("%d\t", i);
        }
    }
    return 0;
}