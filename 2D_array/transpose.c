// program to transpose a matrix
#include <stdio.h>
int readarray(int arr[5][5], int m, int n);
int printarray(int arr[5][5], int m, int n);
int main()
{
    int A[5][5];
    int m, n, i, j;
    printf("enter the rows & columns : ");
    scanf("%d%d", &m, &n);
    printf("enter the matrix : ");
    readarray(A, m, n);
    printf("Matrix before transpose \n");
    printarray(A,m,n);
    printf("transpose of the matrix is : \n");
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
            printf("%d\t\t", A[j][i]);
        printf("\n");
    }
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
            printf("%d\t\t", arr[i][j]);
        printf("\n");
    }
}