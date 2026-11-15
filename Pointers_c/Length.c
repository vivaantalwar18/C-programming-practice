#include <stdio.h>

void main() {
    int length = 0;
    char str[100], *ptr;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    ptr = str;

    while (*ptr != '\0' && *ptr != '\n') {
        length++;
        ptr++;
    }

    printf("Length of string = %d\n", length);
}