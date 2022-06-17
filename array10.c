#include <stdio.h>

int main()
{
    int i, j, m, n;
    int matrix[10][20];
    int sum;

    printf("Enter number of rows : ");
    scanf("%d", &m);
    printf("Enter number of columns : ");
    scanf("%d", &n);

    /* Input data in matrix */
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf("Enter data in [%d][%d]: ", i, j);
            scanf("%d", &matrix[i][j]);
        }
    }

    printf("\n");

    /* Display the matrix */
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf("%d\t", matrix[i][j]);
        }
        printf("\n");
    }

    printf("\n");

    /* Find the row-wise sum of matrix */
 
    printf("\n");

    /* Find the column-wise sum of matrix */
    for (i = 0; i < n; i++)
    {
        sum = 0;
        for (j = 0; j < m; j++)
        {
            sum += matrix[j][i];
        }
        printf("Sum of column %d = %d\n", i + 1, sum);
    }

    return 0;
}
