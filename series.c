#include<stdio.h>
#include<math.h>
main(){
	int x, i, sum=1;
	scanf("%d", &x);
	for(i=1;i<=x;i++)
		sum+=i*pow(x,i);
	printf("%d", sum);
}
