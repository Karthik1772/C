// to find distinct elements of the array//means  repeated no
#include<stdio.h>
int main()
{
    int arr[100];
    int size,i,j,distinct;
    printf("enter the array size : ");
    scanf("%d",&size);
    printf("enter the array elements");
    for(i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<size;i++)
    {
        distinct=1;
        for(j=0;j<size;j++)
        {
            if((arr[i]==arr[j])&&(i!=j))
            {
                distinct=0;
                break;
            }
        }
        if(distinct==0)
        {
            printf("%d\t", arr[i]);
        }
    }
}