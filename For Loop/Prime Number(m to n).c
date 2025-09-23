#include <stdio.h>

int main() {
    int n, m, j, isPrime;

    printf("Enter m: ");
    scanf("%d", &m);
            
    printf("Enter n: ");
    scanf("%d", &n);

    printf("Prime numbers from %d to %d are:\n", m, n);

    for (;m <= n;m++) {
        isPrime = 1;

        j = 2;
        for (;j <= m / 2;j++) {
            if (m % j == 0) {
                isPrime = 0;
                break;
            }
        }
        if (isPrime == 1 && m > 1) {
            printf("%d ", m);
        }
    }

    return 0;
}
