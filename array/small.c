#include <stdio.h>
int main()
{
    int arr[100], i, size, small, larg;
    printf("enter the size of array : ");
    scanf("%d", &size);
    printf("enter the array elements \n");
    for (i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }
    small = larg = arr[0];
    for (i = 1; i < size; i++)
    {
        if (small > arr[i])
            small = arr[i];
        if (larg < arr[i])
            larg = arr[i];
    }
    printf("nth small no is %d\nnth large no is %d", larg, small);
    return 0;
}