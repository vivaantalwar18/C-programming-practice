#include <stdio.h>

void main() {
    char a[200];
    int i, len = 0;
    printf("Enter a string: ");
    fgets(a, sizeof(a), stdin);
    for (i = 0; a[i] != '\0' && a[i] != '\n'; i++) {
        len++;
    }
    printf("Length of the given string: %d\n", len);
}