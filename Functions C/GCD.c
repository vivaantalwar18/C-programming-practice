#include <stdio.h>

int GCD(int a, int b) {
    if (b == 0) {
        return a;
    }

    return GCD(b, a % b);
}

int main() {
    int a, b, gcd;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    gcd = GCD(a, b);

    printf("GCD of %d and %d = %d\n", a, b, gcd);

    return 0;
}