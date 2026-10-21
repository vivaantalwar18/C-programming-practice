#include <stdio.h>
#include <string.h>

void main() {
    char a[200], b[100], c[200];
    int len;
    printf("Enter the first string: ");
    fgets(a, sizeof(a), stdin);
    a[strlen(a) - 1] = '\0';
    printf("Enter the second string: ");
    fgets(b, sizeof(b), stdin);
    b[strlen(b) - 1] = '\0';
    strcat(a, b);
    printf("Concatenated string: %s\n", a);
    len = strlen(a);
    printf("Length of concatenated string: %d\n", len);
    strcpy(c, a);
    printf("Copied string: %s\n", c);
}