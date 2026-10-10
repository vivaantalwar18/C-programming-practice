#include <stdio.h>

void main()
{
    int marks[3][5], j, i, total;
    float sum = 0, avg;

    printf("Enter marks of 3 students in 5 subjects:\n");

    for (i = 0; i < 3; i++)
    {
        printf("Enter marks for Student %d:\n", i + 1);

        for (j = 0; j < 5; j++)
        {
            printf("Subject %d: ", j + 1);
            scanf("%d", &marks[i][j]);
        }
    }

    printf("Total Marks of Each Student:");

    for (i = 0; i < 3; i++)
    {
        total = 0;

        for (j = 0; j < 5; j++)
        {
            total += marks[i][j];
        }

        printf("\nStudent %d = %d", i + 1, total);
    }

    printf("\nAverage Marks of Each Subject:\n");

    for (j = 0; j < 5; j++)
    {
        sum = 0;

        for (i = 0; i < 3; i++)
        {
            sum += marks[i][j];
        }

        avg = sum / 3;
        printf("Subject %d = %.2f\n", j + 1, avg);
    }
}