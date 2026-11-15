#include <stdio.h>

void main() {
    int n, i, sum = 0, a[100], *ptr;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);

    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    ptr = a;

    for (i = 0; i < n; i++) {
        sum += *(ptr + i);
    }

    printf("Sum of array elements = %d\n", sum);
}