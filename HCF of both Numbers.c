#include <stdio.h>

int main() {
	int n;
	printf("Enter n Number: ");
	scanf("%d",&n);
	int m;
	printf("Enter m Number: ");
	scanf("%d",&m);

	int t1 = n;
	int t2 = m;

	while (n != m) {
		if (n > m) {
			n = n - m;
		} else {
			m = m - n;
		}
	}

	printf("The HCF of %d and %d is %d\n", t1, t2, n);

	return 0;
}