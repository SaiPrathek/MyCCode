#include<stdio.h>
main() {
	int a[3][3], b[3][3], i, j, k;
	for(i=0, k=1; i<3; i++) {
		for(j=0; j<3; j++) {
			a[i][j]=k++;
			b[i][j]=k*k;
		}
	}
	for(i=0; i<3; i++) {
		for(j=0; j<3; j++) {
			printf("%4d", a[i][j]);
		}
		printf("\n");
	}
	printf("\n");
	for(i=0; i<3; i++) {
		for(j=0; j<3; j++) {
			printf("%4d", b[i][j]);
		}
		printf("\n");
	}
	printf("\n");
	for(i=0; i<3; i++) {
		for(j=0; j<3; j++) {
			a[i][j]+=b[i][j];
		}
	}
	for(i=0; i<3; i++) {
		for(j=0; j<3; j++) {
			printf("%4d", a[i][j]);
		}
		printf("\n");
	}
}
