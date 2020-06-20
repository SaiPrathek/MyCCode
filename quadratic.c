#include<stdio.h>
#include<math.h>
main(){
	int a, b, c, i, d;
	float x1, x2;
	scanf("%d%d%d", &a, &b ,&c);
	d=b*b-4*a*c;
	if(d>=0){
		if(d>0){
			x1=(float)(-b+sqrt(d))/(2*a);
			x2=(float)(-b-sqrt(d))/(2*a);
		}
		else{
			x1=(float)(-b/(2*a));
			x2=x1;
		}
	}
	else{
		x1=123;
		x2=321;
	}
	printf("%10f-%10f", x1,x2);
}
