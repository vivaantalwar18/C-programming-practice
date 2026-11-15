#include <stdio.h>

struct employee {
    int empno;
    char name[50];
    float bsal, hra, netsal;
};

void main() {
    struct employee e[100];
    int n, i;
    float sum = 0, avg;

    printf("Enter number of employees: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        printf("Enter details of Employee %d\n", i + 1);

        printf("Employee No.: ");
        scanf("%d", &e[i].empno);

        printf("Name: ");
        scanf(" %[^\n]", e[i].name);

        printf("Basic Salary: ");
        scanf("%f", &e[i].bsal);

        printf("HRA: ");
        scanf("%f", &e[i].hra);

        e[i].netsal = e[i].bsal + e[i].hra;
        sum += e[i].netsal;
    }

    avg = sum / n;

    printf("Average Net Salary = %.2f\n", avg);

    printf("Employees having net salary more than average:\n");

    printf("Emp No\tName\t\tBasic\t\tHRA\t\tNet Salary\n");

    for (i = 0; i < n; i++) {
        if (e[i].netsal > avg) {
            printf("%d\t%-16s%.2f\t%.2f\t\t%.2f\n",
                   e[i].empno, e[i].name, e[i].bsal,
                   e[i].hra, e[i].netsal);
        }
    }
}