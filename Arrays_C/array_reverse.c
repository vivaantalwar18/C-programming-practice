// Reversing an Array Using an Auxiliary Array
#include <stdio.h>
void main()
{
    int a[100], n, i, c[100];
    printf("Enter number of elements: ");
    scanf("%d", &n);
    printf("Enter array elements:\n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    for (i = 0; i < n; i++)
    {
        c[i] = a[n - 1 - i];
    }
    printf("Reversed array:\n");
    for (i = 0; i < n; i++)
    {
        printf("%d ", c[i]);
    }
}