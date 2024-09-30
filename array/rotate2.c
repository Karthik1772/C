// program to rotate array elements on left side by k times
#include <stdio.h>
int main()
{
    int arr[100];
    int size, i, j, n,temp;
    printf("enter the array size : ");
    scanf("%d", &size);
    printf("enter the array elements : \n");
    for(i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("enter the times to rotate : ");
    scanf("%d",&n);
    for (i = 0; i < n; i++)
    {
        temp=arr[size-1];
        for(j=size-1;j>0;j--)
        {
            arr[j]=arr[j-1];
        }
        arr[i]=temp;
    }
    for(i=0;i<size;i++)
    {
        printf("%d\t",arr[i]);
    }
}