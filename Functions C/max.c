#include <stdio.h>

int Max(int a[], int n) {
    int i, max = a[0];

    for (i = 1; i < n; i++) {
        if (a[i] > max) {
            max = a[i];
        }
    }

    return max;
}

int main() {
    int a[100], n, i, max;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter %d numbers:\n", n);

    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    max = Max(a, n);

    printf("Maximum number = %d\n", max);

    return 0;
}