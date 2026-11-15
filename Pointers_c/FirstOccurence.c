#include <stdio.h>
#include <string.h>

void main() {
    char str[100], sub[100], *ptr;

    printf("Enter main string: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0';

    printf("Enter substring: ");
    fgets(sub, sizeof(sub), stdin);
    sub[strcspn(sub, "\n")] = '\0';

    ptr = strstr(str, sub);

    if (ptr != NULL) {
        printf("Substring found\n");
        printf("First occurrence: %s\n", ptr);
    }
    else {
        printf("Substring not found\n");
    }
}