#include<stdio.h>
int percentage(float a){
//	float b=a+(float)b/100;
	if(b<a){
		printf("%f", a);
		return 0;
	}
	printf("%f\n", a);
	return percentage(a-::(float)b/100);
}
main(){
	float a;
	scanf("%f", &a);
	int b=a;
	percentage(a);
}



