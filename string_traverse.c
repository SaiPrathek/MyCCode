#include<stdio.h>
main(){
	char c[10], i=0;
	scanf("%s", &c);
	while(c[i]!='\0')
		printf("-%c",c[i++]);
	printf("-\n%d", i);
}
