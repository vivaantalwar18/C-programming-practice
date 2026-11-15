#include <stdio.h>

void main() {
    int a, b, c, *p1, *p2, *p3, greatest, smallest;

    printf("Enter three numbers: ");
    scanf("%d %d %d", &a, &b, &c);

    p1 = &a;
    p2 = &b;
    p3 = &c;

    greatest = *p1;
    smallest = *p1;

    if (*p2 > greatest) {
        greatest = *p2;
    }

    if (*p3 > greatest) {
        greatest = *p3;
    }

    if (*p2 < smallest) {
        smallest = *p2;
    }

    if (*p3 < smallest) {
        smallest = *p3;
    }

    printf("Greatest = %d\n", greatest);
    printf("Smallest = %d\n", smallest);
}