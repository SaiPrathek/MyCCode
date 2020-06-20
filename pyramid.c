// Program To Print A Pyramid Wirh Given Number Of Rows

#include<stdio.h>
main() {
	int n, i, j, k, temp;
	printf("Enter The Number Of Rows In The Pyramid : ");
	scanf("%d", &n);
	printf("\n");
	temp = n;
	for(i = 1; i<=n; i++) {
		for(k = temp-i; k>0; k--) {
			printf(" ");
		}

		for(j = 1; j<=i; j++) {
			printf("* ");
		}
		printf("\n");
	}
}
