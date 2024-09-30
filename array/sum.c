//sum of array elements
// #include<stdio.h>
// int main()
// {
//     int arr[100];
//     int sum=0,i,size;
//     printf("enter the size of array ");
//     scanf("%d",&size);
//     printf("Enter the array elemnets\n");
//     for(i=0;i<size;i++)
//     {
//         scanf("%d",&arr[i]);
//         sum=sum+arr[i];
//     }
//     printf("sum is %d",sum);
//     return 0;
// }/

#include<stdio.h>
int main()
{
    int arr[100],sume=0,sumo=0,i,size;
    printf("enter the array size : ");
    scanf("%d",&size);
    printf("Enter the array elements\n");
    for(i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
        if(arr[i]%2==0)
            sume=sume+arr[i];
        else
            sumo=sumo+arr[i];
    }
    printf("even sum is %d\nodd sum is %d",sume,sumo);
}