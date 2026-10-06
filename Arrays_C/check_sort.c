// Checking Whether an Array is Sorted
#include <stdio.h>
void main()
{
    int n, a[100], i, flag = 0;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    printf("Enter array elements:\n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    for (i = 0; i < n - 1; i++)
    {
        if (a[i] > a[i + 1])
        {
            flag = 1;
            break;
        }
    }
    if (flag == 0)
    {
        printf("Array is sorted in ascending order");
    }
    else
    {
        printf("Array is not sorted");
    }
}