#include <stdio.h>
#include <math.h>
///Ham tim ra snt
int snt(int n) {
	for (int i=2; i<=sqrt(n); i++)
		if (n % i == 0) return 0;
	return 1;
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
    m=n;
    
	if (snt(n)==1)
		printf("%d = 1 * %d ",n,n);
	else {
		while (n>0) {
			if ((snt(i)==1) && (n % i ==0)) {
				printf("%d ",i);
				n = n / i;
			} else
				i++;
			if (i>n) break;	
		}
	}
	printf("= %d",m);
	return 0;
}