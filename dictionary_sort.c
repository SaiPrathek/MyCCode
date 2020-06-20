#include<stdio.h>
#include<string.h>
int n=5;
int str(char a[], char b[]){
	int i;
	while(a[i]!='\0'&&b[i]!='\0'){
		if(a[i]>b[i])
			return 1;
		else if(a[i]<b[i])
			return -1;
	}
	return 0;
}
void sort(char c[][10]){
	int i, j;
	char  t[10];
	for(i=0;i<n-1;i++){
		for(j=i+1;j<n;j++){
			if(str(c[i], c[j])>0){
				strcpy(t, c[i]);
				strcpy(c[i], c[j]);
				strcpy(c[j], t);
			}
		}
	}
	for(i=0;i<n;i++)
		puts(c[i]);
}
main(){
	char c[10][10], t[10];
	int i, j;
	for(i=0;i<n;i++)
		gets(c[i]);
	puts("");
	sort(c);
}
