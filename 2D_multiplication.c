#include<stdio.h>
main()
{
	int a[5][5], b[5][5], c[5][5], i, j, k;
    int	n=5;
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			a[i][j]=j+1;
			b[i][j]=i+1;
		}
	}
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			printf("%2d", a[i][j]);
		}
		printf("\n");
	}
	printf("\n");
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			printf("%2d", b[i][j]);
		}
		printf("\n");
	}
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			c[i][j]=0;
			for(k=0;k<n;k++){
				c[i][j]+=a[i][k]*b[k][j];
			}
		}
	}
	printf("\n");
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			printf("%5d", c[i][j]);
		}
		printf("\n");
	}
}
