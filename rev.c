#include<stdio.h>
rev(char *ptr){
	if(*ptr){
		rev(ptr+1);
		printf("%c", *ptr);
	}
}
main(){
	char c[36]="abcdefghivklmnopqrstuvwxyz\0";
	rev(c);
}
