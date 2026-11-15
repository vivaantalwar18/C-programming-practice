#include <stdio.h>

struct personal {
    char name[50], date[15];
    float salary;
};

int main() {
    struct personal p;

    printf("Enter name: ");
    scanf(" %[^\n]", p.name);

    printf("Enter date of joining (DD/MM/YYYY): ");
    scanf("%s", p.date);

    printf("Enter salary: ");
    scanf("%f", &p.salary);

    printf("Personal Information\n");

    printf("Name: %s\n", p.name);
    printf("Date of Joining: %s\n", p.date);
    printf("Salary: %.2f\n", p.salary);

    return 0;
}