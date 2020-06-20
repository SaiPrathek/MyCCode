#include<stdio.h>
main(){
	int a, b, i;
	scanf("%d%d", &a, &b);
	for(i=a<b?a:b;i>=1;i--){
		if(a%i==0&&b%i==0){
			printf("%d", i);
			printf("%4d", (a*b)/i);
			break;
		}
	}
}
