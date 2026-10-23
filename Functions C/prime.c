#include <stdio.h>

int isPrime(int n) {
    int i;

    if (n < 2) {
        return 0;
    }

    for (i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            return 0;
        }
    }

    return 1;
}

int main() {
    int n, num = 2, c = 0;

    printf("Enter n: ");
    scanf("%d", &n);

    printf("First %d prime numbers are:\n", n);

    while (c < n) {
        if (isPrime(num)) {
            printf("%d ", num);
            c++;
        }
        num++;
    }

    return 0;
}