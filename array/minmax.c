//this program gives to min sum and max sum in a given array
#include<stdio.h>
int main()
{
    int arr[100];
    int size,small,larg,sum,i;
    printf("enter the array size : ");
    scanf("%d",&size);
    printf("enter the aray elements\n");
    for(i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
    }
    small=larg=sum=0;
    for(i=0;i<size;i++)
    {
        sum=sum+arr[i];
        if(small>arr[i])
            small=arr[i];
        if(larg<arr[i])
            larg=arr[i];
    }
    printf("min-sum = %d\nmax-sum = %d",sum-small,sum-larg);
}