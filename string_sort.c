#include<stdio.h>
#include<string.h>
main() {
	char s[10][10], t[10];
	int i, j, k, n=10;
	for(i=0; i<n; i++)
		scanf("%s", &s[i]);
	for(i=0;i<n-1;i++){
		for(j=i+1;j<n;j++){
			for(k=0;s[i][k]!='\0';k++){
				if(s[i][k]>s[j][k]){
					copy(t, s[i]);
					copy(s[i], s[j]);
					copy(s[j], t);
				}
			}
		}
	}
	for(i=0; i<n; i++){
		printf("\n%s", s[i]);
	}
}
copy(char a[10], char b[10]){
	int i;
	for(i=0;a[i]!='\0'; i++)
		b[i]=a[i];
	b[i]='\0';
}
