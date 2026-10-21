#include <stdio.h>
#include <string.h>

void main() {
    char a[200];
    int i, words = 0;
    printf("Enter a sentence: ");
    fgets(a, sizeof(a), stdin);
    for (i = 0; a[i] != '\0'; i++) {
        if (a[i] == ' ' && a[i+1] != ' ' && a[i+1] != '\0' && a[i+1] != '\n') {
            words++;
        }
    }
    if (a[0] != ' ' && a[0] != '\n') {
        words++;
    }
    printf("Number of words in the sentence: %d\n", words);
}