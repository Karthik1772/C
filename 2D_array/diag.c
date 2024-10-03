// program to find sum of  diagonal elements of a matrix
#include <stdio.h>
int readarray(int arr[5][5], int m, int n);
int printarray(int arr[5][5], int m, int n);
int main()
{
    int A[5][5];
    int m, n, sum = 0, i, j;
    printf("enter the no of rows and columns : ");
    scanf("%d%d", &m, &n);
    printf("Enter the array elements : ");
    readarray(A, m, n);
    printarray(A, m, n);
    for (i = 0, j = 0; i < m && j < n; i++, j++)
    {
        sum = sum + A[i][j];
    }
    printf("%d",sum);
}
int readarray(int arr[5][5], int m, int n)
{
    int i, j;
    for (i = 0; i < m; i++)
        for (j = 0; j < n; j++)
            scanf("%d", &arr[i][j]);
}
int printarray(int arr[5][5], int m, int n)
{
    int i, j;
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
            printf("%d\t", arr[i][j]);
        printf("\n");
    }
}