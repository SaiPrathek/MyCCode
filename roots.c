#include <stdio.h>
#include <math.h>
main() {
	int a, b, c, flag;
	float d, x1, x2;
	printf("Enter The Coefficients Of The Quadratic Equation : ");
	scanf("%d%d%d", &a, &b, &c);
	// printf("%d %d %d", a, b, c);
	if (a!=0) {
		printf("Quadratic Equation.\n");
		d = b*b - 4*a*c;
		printf("%f\n", d);
		if(d>0)
			flag = 1;
		else if(d==0)
			flag = 2;
		else
			flag = 3;
		switch(flag) {
			case 1: {
				printf("Real And Distinct Roots.\n");
				x1 = (float)(-b + sqrt(d))/(2*a);
				x2 = (float)(-b - sqrt(d))/(2*a);
				printf("x1 = %f, x2 = %f", x1, x2);
				break;
			}
			case 2: {
				printf("Real And Equal Roots.\n");
				x1 = (float)-b/(2*a);
				x2 = x1;
				printf("x1 = x2 = %f", x1);
				break;
			}
			case 3:
				printf("Imaginary Roots.\n");
				x1 = (float)(-b + sqrt(-d))/(2*a);
				x2 = (float)(-b - sqrt(-d))/(2*a);
				printf("x1 = %f + %fi, x2 = %f - %fi", x1, x2, x1, x2);
		}
	} else
		printf("Invalid Coefficients.");
}
