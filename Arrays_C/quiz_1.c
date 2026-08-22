/* Write a program to accept marks of five students in an array and print them on the screen*/
#include <stdio.h>

int main()
{
    int marks[5];

    printf("Enter marks for 5 students\n");

    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &marks[i]);
    }

    for (int i = 0; i < 5; i++)
    {
        printf("The value of marks at index %d is %d\n", i, marks[i]);
    }

    return 0;
}