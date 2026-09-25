#include <stdio.h>

int main() {
    int a[50], b[50], c[100], n, i, j;

    printf("Enter actual array size for both arrays: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    for (j = 0; j < n; j++) {
        scanf("%d", &b[j]);
    }

    for (i = 0; i < n; i++) {
        c[i] = a[i] + b[i];
    }

    printf("Result array: ");
    for (i = 0; i < n; i++) {
        printf("%d ", c[i]);
    }

    return 0;
}