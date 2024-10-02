#include <stdio.h>
int main()
{
    int i, res = 0;
    int num = [ 10, 4, 10, 2, 3, 2, 3, 3, 3, 10, 4 ];
    for (i = 0; i < num[i]; i++)
    {
        num[i] = num[i] ^ num[i + 1];
        if (num[i] == num[i])
        {
            res++;
        }
    }
    printf("%d", res);
    return 0;
}