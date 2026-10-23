#include <stdio.h>

int Fact(int n) {
    int i, fact = 1;

    for (i = 1; i <= n; i++) {
        fact = fact * i;
    }

    return fact;
}

int main() {
    int n, fact;

    printf("Enter a number: ");
    scanf("%d", &n);

    if (n < 0) {
        printf("Factorial is not defined for negative numbers\n");
    } else {
        fact = Fact(n);
        printf("Factorial of %d = %d\n", n, fact);
    }

    return 0;
}