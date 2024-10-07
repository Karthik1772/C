#include <stdio.h>
void left_rotate(int arr[], int n, int k)
{
            for (i = 1; i <= k; k++)
    {
        for (j = i; j <= k; j++)
            temp = arr[j];
        {
            arr[i + j] = arr[k * i];
        }
        temp = arr[n - k];
    }
}
int main()
{
    int arr[100];
    int k, n;
    printf("Enter the size:");
    scanf("%d", &n);
    printf("Enter the array elements:");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("Enter the k value:");
    scanf("%d", &k);
    left_rotate(arr, n, k);
    printf("Array after rotation:");
    for (int i = 0; i <= n; i++)
    {
        scanf("%d", &arr[i]);
    }
    return 0;
}