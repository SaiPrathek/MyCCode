#include<stdio.h>
#include<string.h>
#include<ctype.h>
void main(){
	char str[100];
	scanf("%[^\n]s", &str);
	int i=0;
	int nc = 0, ac = 0, sc = 0;
	int l = strlen(str);
	printf("%d", l);
	for(i=0;i<l-1;i++){
		if (isdigit(str[i]))
			nc++;
		else if (!isalpha(str[i]))
			sc++;
		else
			ac++;
	}
	printf("Number of Alphabets in the string is:%d\nNumber of Digits in the string id:%d\nNumber of Special Characters in the string is:%d", ac, nc, sc);
}
