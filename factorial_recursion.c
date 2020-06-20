#include<stdio.h>
int fact(int);
main(){
	int n;
	scanf("%d" ,&n);
	printf("%d", fact(n));
}
int fact(int a){
	if(a==0)
		return 1;
	else
		return a*fact(a-1);
}

