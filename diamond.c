// Program To Print A Diamond Wirh Given Number Of Rows

#include<stdio.h>
main() {
	int r, n, i, j, k, temp;
	printf("Enter The Number Of Rows In The Diamond (Odd) : ");
	scanf("%d", &r);
	n = r/2;
	printf("\n");
	temp = n+1;
	for(i = 1; i<=n+1; i++) {
		for(k = temp-i; k>0; k--) {
			printf(" ");
		}

		for(j = 1; j<=i; j++) {
			printf(" *");
		}
		printf("\n");
	}
	for(i = n; i>=1; i--) {
		for(k = temp-i; k>0; k--) {
			printf(" ");
		}

		for(j = 1; j<=i; j++) {
			printf(" *");
		}
		printf("\n");
	}
}
