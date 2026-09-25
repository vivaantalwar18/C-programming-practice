//Delete element from array
#include <stdio.h>

int main() {
    int a[50], n, i, pos;

    printf("Enter array size: ");
    scanf("%d", &n);

    printf("Enter array elements: ");
    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    printf("Enter position of element to delete: ");
    scanf("%d", &pos);

    if (pos < 0 || pos >= n) {
        printf("Invalid position!");
        return 1;
    }

    for (i = pos; i < n - 1; i++) {
        a[i] = a[i + 1];
    }

    printf("Array after deletion: ");
    for (i = 0; i < n - 1; i++) {
        printf("%d ", a[i]);
    }

    return 0;
}