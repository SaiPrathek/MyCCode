// Program To Print A Pascal's Triangle With Given Number Of Rows

#include<stdio.h>
main() {
	int n, i, j, k, temp, num;
	printf("Enter The Number Of Rows In The Pyramid : ");
	scanf("%d", &n);
	printf("\n");
	num = 1;
	temp = n+1;
	for(i = 1; i<=n+1; i++) {
		for(k = temp-i; k>0; k--) {
			printf(" ");
		}
		for(j = 1; j<=i; j++) {
			printf("%2d", num);
		}
		printf("\n");
	}
}

/*				1
               1  1
              1  2  1
             1  3  3  1
            1  4  6  4  1
           1  5 10 10  5  1
          1  6 11 20 11  6  1
*/
