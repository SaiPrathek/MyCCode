// Program To Print A Floyd's Triangle With Given Number Of Rows

#include<stdio.h>
main() {
	int n, i, j, k, temp;
	printf("Enter The Number Of Rows In The Pyramid : ");
	scanf("%d", &n);
	printf("\n");
	temp = 1;
	for(i = 1; i<=n; i++) {
		for(j = 1; j<=i; j++) {
			printf("%d ",temp++);
		}
		printf("\n");
	}
}
