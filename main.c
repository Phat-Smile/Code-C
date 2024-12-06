#include <stdio.h>
#include <math.h>
///Ham tim ra snt
void snt(int n) {
	printf("%d = ",n);

	for (int i=2; i<=sqrt(n); i++) {
		int d=0;
		while (n % i ==0) {
			n = n / i;
			d++;
		}

		if (d>=1) {
			printf("%d^%d",i,d);
			if (n>1) {
				printf(" * ");
			}
		}
	}
	if (n>2) printf("%d^1",n);
}

// Function main
int main() {
	int n,a,i,m;
	i=2;

	do {
		printf("Nhap n = ");
		scanf("%d",&n);
		if (n<=0) printf("Vui long nhap lai n\n");
	} while(n<=0);

snt(n);
	return 0;
}