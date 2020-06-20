#include<stdio.h>
main() {
	int x, n, i=1, bin=0, rev;
	scanf("%d", &x)	;
	n=x;
	while(n>0){
		rev=n%2;
		bin=bin+rev*i;
		n=n/2;
		i=i*10;
	}
	printf("%d", bin);
}
/*for(i=0; n!=0; i++) {
		bin=bin*10+n%2;
		n/=2;
	}
	for(i=0; bin!=0; i++) {
		rev=rev*10+bin%10;
		bin/=10;
	}*/
