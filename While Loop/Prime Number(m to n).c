#include <stdio.h>

int main() {
    int n, m, j, isPrime;

    printf("Enter m: ");
    scanf("%d", &m);
            
    printf("Enter n: ");
    scanf("%d", &n);

    printf("Prime numbers from %d to %d are:\n", m, n);

    while (m <= n) {
        isPrime = 1;

        j = 2;
        while (j <= m / 2) {
            if (m % j == 0) {
                isPrime = 0;
                break;
            }
            j++;
        }

        if (isPrime == 1 && m > 1) {
            printf("%d ", m);
        }

        m++;
    }

    return 0;
}
