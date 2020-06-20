#include<stdio.h>
int gcd(int x, int y){
	printf("%d-%d", y%x, y);
	if(y!=0)
		return(y, y%x);
	return x;
}
main()
{
	int x, y;
	scanf("%d%d", &x, &y);
	printf("\n\n%d", gcd(x, y));
}
