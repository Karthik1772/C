//prgm to find nth largest number
#include<stdio.h>
int main()
{
    int arr[100],size,n,i,larg;
    printf("enter the size of array : ");
    scanf("%d",&size);
    printf("enter the n th value");
    scanf("%d",&n);
    printf("Enter the array elements");
    for(i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
    }
    larg=arr[i];
    for(i=0;i<size;i++)
    {
        if(larg<arr[i])
            larg=arr[i];
    }
    printf("larg %d",larg);
}