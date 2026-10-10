#include <stdio.h>
#include <math.h>

int main() {
    int a[100][100], i, j, n, sum1 = 0;
    float norm, sum2 = 0;

    printf("Enter size of square matrix: ");
    scanf("%d", &n);

    printf("Enter matrix elements:\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    for (i = 0; i < n; i++) {
        sum1 += a[i][i];
    }

    printf("Trace of matrix = %d\n", sum1);

    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            sum2 += (a[i][j] * a[i][j]);
        }
    }

    norm = sqrt(sum2);
    printf("Norm of matrix = %.2f\n", norm);
    return 0;
}