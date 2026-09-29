/*Create an array of multiplication table of 7 up to 10 (7 × 10 = 70). Use realloc so that
it can store the multiplication table up to 15 (7 × 15 = 105)*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n = 10;
    int *ptr;
    ptr = (int *)malloc(n *sizeof(int));

    for (int i = 0; i < n; i++)
    {
      ptr[i] = 7 * (i+1);
    }

    printf("The Array is \n");

    for (int i = 0; i < n; i++)
    {
        printf("%d \n", ptr[i]);
    }

    n = 15;
    ptr = (int *)realloc(ptr, 10 * sizeof(int));

    for (int i = 0; i < n; i++)
    {
        ptr[i] = 7 * (i+1);
    }

    printf("The Array is \n");

    for (int i = 0; i < n; i++)
    {
        printf("%d \n", ptr[i]);
    }

    return 0;
}
