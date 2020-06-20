#include<stdio.h>
main()
{
	int a, b, c;
	scanf("%d%d%d", &a, &b, &c);
	a<b&&a<c?printf("a"):b<c?printf("b"):printf("c");
}
