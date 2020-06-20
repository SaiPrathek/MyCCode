#include<stdio.h>
#include<math.h>
main(){
	int m[4][4], i=0, j, n=2, det=0;
	for(i=0;i<n;i++)
		for(j=0;j<n;j++)
			scanf("%d", &m[i][j]);
	for(i=0;i<n;i++){
		for(j=0;j<n;j++)
			printf("%2d", m[i][j]);
		printf("\n");
	}
	
	int determinant(int a, int b, int c, int d){
		return a*b-c*d;
	}	
	for(i=0;i<n;i++)
			det=pow(-1,i)*determinant(m[0][0], m[1][1], m[0][1], m[1][0]);
	printf("%d * %d - %d * %d = %d", m[0][0], m[1][1], m[0][1], m[1][0], det);
}
