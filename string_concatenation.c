#include<stdio.h>
main(){
	char a[10], b[10], c[10], i=0, j=0;
	scanf("%s%s", &a, &b);
	printf("%s + %s", a, b);
	while(a[j]!='\0')
		c[i++]=a[j++];
	j=0;
	while(b[j]!='\0')
		c[i++]=b[j++];
	c[i]='\0';
	printf(" = %s", c);
}
