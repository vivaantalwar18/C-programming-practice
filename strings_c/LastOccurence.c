#include <stdio.h>

void main()
{
    int i, last = -1;
    char a[100], ch;
    printf("Enter a string: ");
    fgets(a, sizeof(a), stdin);
    printf("Enter the target character: ");
    scanf("%c", &ch);
    for (i = 0; a[i] != '\0'; i++)
    {
        if (a[i] == ch)
        {
            last = i;
        }
    }
    if (last != -1)
    {
        printf("Last occurrence of '%c' is at index %d\n", ch, last);
    }
    else
    {
        printf("'%c' not found in the string\n", ch);
    }
}