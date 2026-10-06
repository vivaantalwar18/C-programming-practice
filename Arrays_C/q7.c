/* Counting Positive, Negative,Odd, Even, and Zero Numbers in an Array*/
#include <stdio.h>
void main()
{
    int a[100], i, n, c1 = 0, c2 = 0, c3 = 0, c4 = 0, zero = 0;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    printf("Enter array elements:\n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    for (i = 0; i < n; i++)
    {
        if (a[i] > 0)
        {
            c1 = c1 + 1;
        }
        if (a[i] < 0)
        {
            c2 = c2 + 1;
        }
    }
    for (i = 0; i < n; i++)
    {
        if (a[i] % 2 != 0)
        {
            c3 = c3 + 1;
        }
        if (a[i] == 0)
        {
            zero++;
        }
        if (a[i] % 2 == 0 && a[i] != 0)
        {
            c4 = c4 + 1;
        }
    }
    printf("Positive numbers = %d\n", c1);
    printf("Negative numbers = %d\n", c2);
    printf("Odd numbers = %d\n", c3);
    printf("Even numbers = %d\n", c4);
    printf("Zero numbers = %d\n", zero);
}