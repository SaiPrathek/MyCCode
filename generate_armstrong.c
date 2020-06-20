#include<stdio.h>
#include<math.h>
int armstrong(int);
main() {
	int n, i;
	scanf("%d", &n);
	for(i=1; i<=n; i++) {
		if(armstrong(i))
			printf("%d\n", i);
	}
}
int armstrong(int x) {
	int y=x, sum=0;
	while(x>0) {
		sum+=pow(x%10, 3);
		x/=10;
	}
	if(y==sum)
		return 1;
	else
		return 0;
}
