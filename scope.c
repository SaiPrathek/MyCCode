#include<stdio.h>
main() {
	int a=1;
	{
		int a=2;
		{
			int a=3;
			printf("%2d", a);
		}
		printf("%2d", a);
	}
	printf("%2d", a);
}
