#include<stdio.h>
main(){
	int i, j, k, n;
	scanf("%d", &n);
	printf("\n");
	n++;
	for(i=1, k=n;i<=n;i++, k--){
		for(j=0;j<i;j++)
			printf("* ");
		for(j=2*k-2;j>1;j--)
			printf("  ");
		for(j=0;j<i;j++){
			if(j==n-1)
				continue;
			printf("* ");
		}
		// printf("-");
		printf("\n");
	}
	for(i=n, k=1;i>1;i--, k++){
		for(j=0;j<i-1;j++)
			printf("* ");
		for(j=1;j<k*2;j++)
			printf("  ");
		for(j=i-1;j>0;j--)
			printf("* ");
		// printf("_");
		printf("\n");
	}
}
