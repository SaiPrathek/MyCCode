// Program To Print A Diamond Wirh Given Number Of Rows

#include<stdio.h>
main() {
	int r, n, i, j, k, temp;
	printf("Enter The Number Of Rows In The Diamond (Odd) : ");
	scanf("%d", &r);
	n = r/2;
	printf("\n");
	temp = 2*n;
	for(i = 0; i<=temp; i++) {
		for(k = temp-i; k>=0; k--) {
			printf("* ");
		}
		for(j = 1; j<=i; j++) {
			printf("  ");
		}
		for(j = 1; j<=i; j++) {
			printf("  ");
		}
		for(k = temp-i+1; k>0; k--) {
			printf("* ");
		}
		printf("\n");
	}
	for(i = temp; i>=0; i--) {
		for(k = temp-i; k>=0; k--) {
			printf("* ");
		}
		for(j = 1; j<=i; j++) {
			printf("  ");
		}
		for(j = 1; j<=i; j++) {
			printf("  ");
		}
		for(k = temp-i; k>=0; k--) {
			printf("* ");
		}
		printf("\n");
	}
}
