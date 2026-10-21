#include <stdio.h>

void main() {
    char a[100];
    int i;
    printf("Enter a sentence: ");
    fgets(a, sizeof(a), stdin);
    for (i = 0; a[i] != '\0'; i++) {
        if (a[i] >= 'a' && a[i] <= 'z') {
            a[i] = a[i] - 32;
        }
    }
    printf("Modified sentence with all lowercase letters converted to uppercase: %s\n", a);
}