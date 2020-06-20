#include<stdio.h>
#include<string.h>
struct stud{
	int r, m;
	char name[10];
};
main(){
	struct stud s[10];
	int i, n, max;
	char a[10];
	scanf("%d", &n);
	for(i=0;i<n;i++){
		scanf("%d", &s[i].r);
		scanf("%s", s[i].name);
		scanf("%d", &s[i].m);
	}
	max=s[0].m;
	for(i=1;i<n;i++){
		if(max<s[i].m){
			max=s[i].m;
			strcpy(a, s[i].name);
		}
	}
	printf("%s - %d", a, max);
}
