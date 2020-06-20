#include<stdio.h>
main() {
	int a, b, m;
	scanf("%d%d", &a, &b);
	while(a!=b) {
		if(a>b)
			a=a-b;
		else
			b=b-a;
	}
	printf("%d",a);
}
