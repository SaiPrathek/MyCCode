#include<stdio.h>
#include<string.h>
void sort(char c[][10], int n) {
	int i, j;
	char  t[10];
	for(i=0; i<n-1; i++) {
		for(j=i+1; j<n; j++) {
			if(strcmp(c[i], c[j])>0) {
				strcpy(t, c[i]);
				strcpy(c[i], c[j]);
				strcpy(c[j], t);
			}
		}
	}
}
int search(char a[][10], int n, int m) {
	int i, j;
	char b[10];
	strcpy(b, a[m]);
	for(i=m+1; i<=n; i++) {
		if(!strcmp(a[i], a[m])) {
			return 0;
		}
	}
	return 1;
}
int pallindrome(char c[]) {
	char b[20];
	int i=0, n=strlen(c);
	n--;
	b[n+1]='\0';
	while(c[i]!='\0')
		b[n--]=c[i++];
	return !strcmp(c, b);
}
main() {
	char c[10], s[100][10];
	int i, j, k, n, count=0, base=0, a, x, f[10], size=0;
	scanf("%d", &a);
	for(x=0; x<a; x++) {
		count=0;
		scanf("%s", c);
		for(k=0; c[k]!='\0'; k++) {
			for(i=k; c[i]!='\0'; i++) {
				base=0;
				for(j=k; j<=i; j++) {
					s[count][base++]=c[j];
				}
				s[count++][base]='\0';
			}
		}
		base=0;
//		sort(s, count);
		for(k=1, i=0; i<count; i++) {
			if(pallindrome(s[i])&&(search(s, count, i))) {
//				printf("\n%d. %s", k++,s[i]);
				k++;
			}
		}
		f[size++]=k-1;
	}
	for(i=0;i<size;i++)
		printf("\n%d", f[i]);
}
