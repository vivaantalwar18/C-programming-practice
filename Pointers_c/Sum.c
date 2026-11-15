#include <stdio.h>

void main() {
    int a, b, sum, *p1, *p2;

    printf("Enter two integers: ");
    scanf("%d %d", &a, &b);

    p1 = &a;
    p2 = &b;

    sum = *p1 + *p2;

    printf("Sum = %d\n", sum);
}