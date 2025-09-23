#include <stdio.h>

int main() {

	int n,k;
	int count = 0;
	int p = 1;
	int d = 0;

	printf("enter n:");
	scanf("%d",&n);

	printf("enter k:");
	scanf("%d",&k);

	for(int t = n; t > 0; t = t / 10) {
		count++;
		p = p * 10;
	}

	if(k<0) {

		k = k+count;
	}

	for (k = k % count; k > 0 ; k--) {
		d = n % 10;
		n = n / 10;
		n = d * (p / 10) + n;
	}

	printf("Rotation = %d", n);
	return 0;
}