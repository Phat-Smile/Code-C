#include <stdio.h>
#include <math.h>
///Ham tim ra snt
void snt(int n) {
	printf("%d = ",n);
	while (n % 2 ==0) {
		printf("2");
		n = n / 2;
		if (n>1) printf(" * ");
	}
	for (int i=3; i<=sqrt(n); i+=2)
		while (n % i ==0) {
			printf("%d ",i);
			n = n / i;
			 if (n>1) printf("* ");
		}
	if (n>2) printf("%d",n);
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

	if (n>1)
		snt(n);
	else
		printf("Bo nho bi tran");

	return 0;
}
