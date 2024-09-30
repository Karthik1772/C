// program to rotate array elements on left side by k times
#include <stdio.h>
int main()
{
    int arr[100];
    int size, i, temp, k, j;
    printf("enter size: ");
    scanf("%d", &size);
    printf("enter array elements: \n");
    for (i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("enter number of times to be rotated: ");
    scanf("%d", &k);
    printf("\narray before rotation is: ");
    for (i = 0; i < size; i++)
    {
        printf("%d \t", arr[i]);
    }
    for (i = 0; i < k; i++)
    {
        temp = arr[0];
        for (j = 0; j < size - 1; j++)
        {
            arr[j] = arr[j + 1];
        }
        arr[size - 1] = temp;
    }
    printf("\narray after rotation is: ");
    for (i = 0; i < size; i++)
    {
        printf("%d \t", arr[i]);
    }
    return 0;
}