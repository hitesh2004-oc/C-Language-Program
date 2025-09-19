#include <stdio.h>

int main() {
    int n, i = 2, j, isPrime;

    printf("Enter n: ");
    scanf("%d", &n);

    printf("Prime numbers from 1 to %d are:\n", n);

    while (i <= n) {
        isPrime = 1;

        j = 2;
        while (j <= i / 2) {
            if (i % j == 0) {
                isPrime = 0;
                break;
            }
            j++;
        }

        if (isPrime == 1 && i > 1) {
            printf("%d ", i);
        }

        i++;
    }

    return 0;
}
