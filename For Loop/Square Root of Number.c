#include<stdio.h>
int main() {

	int n;
	printf("Enter n Number: ");
	scanf("%d",&n);
	int m;
	printf("Enter m Number: ");
	scanf("%d",&m);

	printf("Prime Factors of both Numbers:-\n");

	for(int i = 2;n > 1 || m > 1;) {

		if(n%i == 0 && m%i == 0) {
			printf("%d ",i);
			n = n/i;
			m = m/i;
		
		}
		else if(n%i == 0) {
			printf("%d ",i);
			n = n/i;
		
		}
		else if (m%i == 0) {
			printf("%d ",i);
			m = m/i;
		
		}
		else if(n%i != 0 || m%i != 0) {
			i++;
		}
	}
	
	return 0;
}