// to find unique elements of the array//means non repeated no
#include <stdio.h>
int main()
{
    int arr[100];
    int size, i, j, unique;
    printf("enter the size : ");
    scanf("%d", &size);
    printf("enter the array elements : ");
    for (i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }
    for (i = 0; i < size; i++)
    {
        unique = 0;
        for (j = 0; j < size; j++)
        {
            if ((arr[i] == arr[j]) && (i != j))
            {
                unique = 1;
                break;
            }
        }
        if (unique == 0)
        {
            printf("%d\t", arr[i]);
        }
    }
}