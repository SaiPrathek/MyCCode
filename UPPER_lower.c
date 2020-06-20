#include<stdio.h>
main() {
	char c;
	scanf("%c", &c);
	if(c>=65&&c<=90)
		printf("%c - %c", c, c+32);
	else
		printf("%c - Invalid Character!", c);
}
