#include <stdio.h>
#include <string.h>

void main()
{
    char a[200], b[100];
    int i, j, f, index = -1;
    printf("Enter a string: ");
    fgets(a, sizeof(a), stdin);
    while (a[i] != '\0')
    {
        if (a[i] == '\n')
        {
            a[i] = '\0';
            break;
        }
        i++;
    }
    printf("Enter a substring: ");
    fgets(b, sizeof(b), stdin);
    i = 0;
    while (b[i] != '\0')
    {
        if (b[i] == '\n')
        {
            b[i] = '\0';
            break;
        }
        i++;
    }
    char *result = strstr(a, b);
    if (result != NULL)
    {
        index = result - a;
        printf("Substring found at index %d\n", index);
    }
    else
    {
        printf("Substring not found in the string\n");
    }
}