#include<stdio.h>
#include<string.h>
void del(char a[10], int i){
}
main(){
	char a[20], b[20], c[20];
	int i=0, size=0, j;
	gets(a);
	strcpy(c, a);
	i=0;
	while(a[i]!='\0'){
		if(a[i]=='('&&a[i-1]=='-'){
			j=i;
			while(a[j]!=')'){
				if(a[j]=='-')
					a[j]='+';
				else if(a[j]=='+')
					a[j]='-';
				j++;
			}
		}
		i++;
	}
	i=0;
	while(a[i]!='\0'){
		if(a[i]!='('&&a[i]!=')')
			b[size++]=a[i];
		i++;
	}
	b[size]='\0';
	puts(c);
	puts(b);
}
