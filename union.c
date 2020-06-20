#include<stdio.h>
union a{
	int a;
	char b;
}a1;
main(){
	scanf("%c", &a1.b);
	printf("%c\n", a1.b);
	scanf("%d", &a1.a);
	printf("%d", a1.a);
}

