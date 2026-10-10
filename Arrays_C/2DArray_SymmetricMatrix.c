#include <stdio.h>

void main() {
    int a[100][100], i, j, n, flag = 1;

    printf("Enter size of square matrix: ");
    scanf("%d", &n);

    printf("Enter matrix elements:\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            if (a[i][j] != a[j][i]) {
                flag = 0;
                break;
            }
        }

        if (flag == 0) {
            break;
        }
    }

    if (flag == 1) {
        printf("The matrix is Symmetric\n");
    } else {
        printf("The matrix is NOT Symmetric\n");
    }
}