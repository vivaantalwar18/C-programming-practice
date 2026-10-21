#include <stdio.h>
#include <string.h>

void main() {
    char a[200];
    int i, len, flag = 1;
    printf("Enter a string: ");
    fgets(a, sizeof(a), stdin);
    len = strlen(a);
    if (a[len - 1] == '\n') {
        a[len - 1] = '\0';
        len--;
    }
    for (i = 0; i < len / 2; i++) {
        if (a[i] != a[len - 1 - i]) {
            flag = 0;
            break;
        }
    }
    if (flag == 1) {
        printf("The string is a palindrome\n");
    }
    else {
        printf("The string is not a palindrome\n");
    }
}