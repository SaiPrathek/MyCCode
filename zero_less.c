#include<stdio.h>
main() {
	int n, sum=0, factor=1;
	scanf("%d", &n);
	while(n>0) {
		if(n%10!=0) {
			sum=sum+(n%10)*factor;
			factor*=10;
		}
		n/=10;
	}
	printf("%d", sum);
}
