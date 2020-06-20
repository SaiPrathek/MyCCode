#include<stdio.h>
main(){
	int n, size;
	char hex[10];
	scanf("%d", &n);
	while(n>0){
		switch(n%16){
			case 1:
			case 2:
			case 3:
			case 4:
			case 5:
			case 6:
			case 7:
			case 8:
			case 9:
			case 0:hex[size++]=(char)(n%16+48);break;
			case 10:hex[size++]='A';break;
			case 11:hex[size++]='B';break;
			case 12:hex[size++]='C';break;
			case 13:hex[size++]='D';break;
			case 14:hex[size++]='E';break;
			case 15:hex[size++]='F';break;
		}
		n/=16;
	}
	hex[size]='\0';
	for(n=size-1;n>=0;n--)
		printf("%c", hex[n]);
}
