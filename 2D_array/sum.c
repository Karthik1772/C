// program to add 2 matrix
#include <stdio.h>
int readarray(int arr[5][5], int m, int n);
int printarray(int arr[5][5], int m, int n);
int main()
{
    int A[5][5], B[5][5], C[5][5];
    int m, n;
    printf("enter the rows & columns : ");
    scanf("%d%d", &m, &n);
    printf("enter the array A : ");
    readarray(A, m, n);
    printf("enter the array B : ");
    readarray(B, m, n);
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            C[i][j] = A[i][j] + B[i][j];
        }
    }
    printarray(A, m, n);
    printf("\t+\n");
    printarray(B, m, n);
    printf("\t= \n");
    printarray(C, m, n);
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