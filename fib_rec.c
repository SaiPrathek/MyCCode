#include<stdio.h>
int fib(int n){
	static int f1=0, f2=1;
	int f;
	if(n<=2){
		printf("%3d%3d", f1, f2);
		return;
	}
	fib(n-1);
	f=f1+f2;
	printf("%3d", f);
	f1=f2;
	f2=f;
	return;
}
main(){
	fib(10);
}
