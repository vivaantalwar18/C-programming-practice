// Printing the Subarray Between Two Indexes
#include <stdio.h>
void main()
{
    int n, i, a[100], start, end;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    printf("Enter array elements:\n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("Enter two indexes: ");
    scanf("%d %d", &start, &end);
    if (start >= 0 && end < n && start <= end)
    {
        printf("Subarray is:\n");
        for (i = start; i <= end; i++)
        {
            printf("%d", a[i]);
            if (i < end)
            {
                printf(" ");
            }
        }
        printf(" \n");
    }
    else
    {
        printf("Invalid indexes");
    }
}