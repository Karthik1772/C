// find the sub array whose sum is x
#include <stdio.h>
int main()
{
    int arr[100];
    int size, i, j, k, sum, flag;
    printf("enter the array size :");
    scanf("%d", &size);
    printf("enter the array elements : \n");
    for (i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("enter the sum : ");
    scanf("%d", &sum);
    for (i = 0; i < size - 2; i++) // 1st element check
    {
        for (j = i + 1; j < size - 1; j++) // 2nd
        {
            for (k = j + 1; k < size; k++) // 3rd
            {
                if (arr[i] + arr[j] + arr[k] == sum)
                {
                    printf("%d\t%d\t%d", arr[i], arr[j], arr[k]);
                    flag = 1;
                    break;
                }
                if (flag == 1)
                    break;
            }
            if (flag == 1)
                break;
        }
        if (flag == 1)
            break;
    }
}