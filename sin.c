#include<stdio.h>
#include<math.h>
main() {
//	int i, j, k, n=5, fact, x, l, count=0;
	int x, i, j,  fact;
	float sine=0;
	scanf("%d", &x);
	for(i=1; i<10; i++) {
		fact = 1;
		for(j=1; j<=i; j++) {
			fact = fact*j;
		}
		printf("\n%d", pow(x, i)/fact);
		if(i%2==0)
			sine+=(float)(pow(x, i)/fact);
		else
			sine-=(float)(pow(x, i)/fact);
	}
	printf("%f", sine);
	double l = sin(x);
	printf("\n%lf", l);
}
