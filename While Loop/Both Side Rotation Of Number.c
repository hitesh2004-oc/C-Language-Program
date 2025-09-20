#include <stdio.h>

int main() {

	int n,k;
	int count = 0;
	int p = 1;
	int t,d = 0;

	printf("enter n:");
	scanf("%d",&n);

	printf("enter k:");
	scanf("%d",&k);

	t = n;
	while (t > 0) {
		count++;
		p = p * 10;
		t = t / 10;
	}

	k = k % count;

	if(k<0) {

		k = k+count;
	}

	while (k > 0) {
		d = n % 10;
		n = n / 10;
		n = d * (p / 10) + n;
		k--;
	}

	printf("Rotation = %d", n);
	return 0;
}