#include <stdio.h>
#include <string.h>

int compare(char a[], char b[]) {
    return strcmp(a, b);
}

void Sort(char names[][100], int n) {
    int i, j;
    char temp[100];

    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - i - 1; j++) {
            if (compare(names[j], names[j + 1]) > 0) {
                strcpy(temp, names[j]);
                strcpy(names[j], names[j + 1]);
                strcpy(names[j + 1], temp);
            }
        }
    }
}

int main() {
    int n, i;
    char names[100][100];

    printf("Enter number of names: ");
    scanf("%d", &n);

    printf("Enter %d names:\n", n);

    for (i = 0; i < n; i++) {
        scanf("%99s", names[i]);
    }

    Sort(names, n);

    printf("Names in alphabetical order:\n");

    for (i = 0; i < n; i++) {
        printf("%s\n", names[i]);
    }

    return 0;
}