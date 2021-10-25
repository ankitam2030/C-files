// Sum of right diagonals of a matrix
#include <stdio.h>

void main()
{
    int i, j, arr[10][10], n, sum = 0;
    printf("Enter the size of the sq. matrix:\n");
    scanf("%d", &n);
    printf("Enter the elements in the matrix:\n");
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            scanf("%d", &arr[i][j]);
            if (i == j)
            {
                sum = sum + arr[i][j];
            }
        }
    }
    printf("Matrix:\n");
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf("% 4d ", arr[i][j]);
                }
        printf("\n");
    }
    printf("Addition of the right diagonal elements is: %d", sum);
}