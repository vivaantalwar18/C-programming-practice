#include <stdio.h>

void main()
{
    int a[50][50], n, i, j, sum, target, magic = 1;

    printf("Enter size of square matrix: ");
    scanf("%d", &n);

    printf("Enter matrix elements:\n");
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    target = 0;
    for (j = 0; j < n; j++)
    {
        target += a[0][j];
    }

    for (i = 0; i < n; i++)
    {
        sum = 0;
        for (j = 0; j < n; j++)
        {
            sum += a[i][j];
        }
        if (sum != target)
        {
            magic = 0;
        }
    }

    sum = 0;
    for (i = 0; i < n; i++)
    {
        sum += a[i][i];
    }
    if (sum != target)
    {
        magic = 0;
    }

    sum = 0;
    for (i = 0; i < n; i++)
    {
        sum += a[i][n - 1 - i];
    }

    if (magic == 1)
    {
        printf("The matrix is a Magic Square\n");
    }
    else
    {
        printf("The matrix is NOT a Magic Square\n");
    }
}