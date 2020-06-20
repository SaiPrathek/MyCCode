#include<stdio.h>
int gcd(int x, int y){
	if(y==0)
		return x;
	return gcd(y, x%y);
}
main(){
	printf("%d", gcd(24, 36));
}
