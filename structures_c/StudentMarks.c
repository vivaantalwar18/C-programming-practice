#include <stdio.h>
#include <string.h>

struct student {
    int rn;
    char name[50];
    float m1, m2, m3, total;
};

void main() {
    struct student s[100], temp;
    int n, i, j;

    printf("Enter number of students: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        printf("Enter details of Student %d\n", i + 1);

        printf("Roll No: ");
        scanf("%d", &s[i].rn);

        printf("Name: ");
        scanf("%s", s[i].name);

        printf("Enter marks in 3 subjects: ");
        scanf("%f %f %f", &s[i].m1, &s[i].m2, &s[i].m3);

        s[i].total = s[i].m1 + s[i].m2 + s[i].m3;
    }

    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - i - 1; j++) {
            if (s[j].total < s[j + 1].total) {
                temp = s[j];
                s[j] = s[j + 1];
                s[j + 1] = temp;
            }
        }
    }

    printf("Roll No\tName\t\tTotal Marks\n");

    for (i = 0; i < n; i++) {
        printf("%d\t\t%-16s%.2f\n",
               s[i].rn, s[i].name, s[i].total);
    }
}