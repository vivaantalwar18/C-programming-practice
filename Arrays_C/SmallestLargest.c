/* Finding the Largest and Smallest Element in an Array*/
#include <stdio.h>
void main()
{
    int n, a[100], i, j, l, s;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    l = a[0];
    s = a[0];
    for (i = 1; i < n; i++)
    {
        if (a[i] > l)
        {
            l = a[i];
        }
        if (a[i] < s)
        {
            s = a[i];
        }
    }
    printf("Largest element = %d\n", l);
    printf("Smallest element = %d\n", s);
}