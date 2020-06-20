#include<stdio.h>
char replace(char c, int n){
	if(n==0)
		return c;
	if(n>0){
		if(c=='a')
			return replace('z', n-1);
		return replace(c-1, n-1);
	}
	if(n<0){
		if(c=='z')
			return replace('a', n+1);
		return replace(c+1, n+1);
	}
}
main(){
	char c[10];
	int n, i=0;
	gets(c);
	scanf("%d", &n);
	while(c[i]!='\0'){
		printf("%c", replace(c[i], n*-1));
		i++;
	}
	for(i=0;i<n;i++){
		printf("%d", i);
	}
}
