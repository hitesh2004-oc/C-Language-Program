#include<stdio.h>
int main() {

	int n;
	printf("Enter n Number: ");
	scanf("%d",&n);
	int m;
	printf("Enter m Number: ");
	scanf("%d",&m);

	printf("LCM of both Numbers:-\n");

	int d = 1;
	int i = 2;

	while(n > 1 || m > 1 ) {

		if(n%i == 0 && m%i == 0) {
			
			n = n/i;
			m = m/i;
			d = d*i;
		}
		else if(n%i == 0) {
			
			n = n/i;
			d = d*i;
		}
		else if (m%i == 0) {
			
			m = m/i;
			d = d*i;
		}
		else if(n%i != 0 || m%i != 0) {
			i++;
		}
	}
		printf("%d",d);
	return 0;
}