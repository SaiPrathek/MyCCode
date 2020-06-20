#include<stdio.h>
void rev(char *p){
	if(*p){
		rev(p+1);
		printf("%c", *p);
	}
}
main(){
	char s[10];
	gets(s);
	rev(s);
}
