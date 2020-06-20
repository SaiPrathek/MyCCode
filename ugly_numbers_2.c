#include<stdio.h>
int prime(int n){
	int i=2;
	while(i<=n/2){
		if(n%i==0)
			return 0;
		i++;
	}
	return 1;
}
int check(int n){
	int i=2, a[10], size=0;
	while(i<=n){
		if(n%i==0&&prime(i))
			a[size++]=i;
		i++;
	}
	for(i=0;i<size;i++){
		if(a[i]!=2&&a[i]!=3&&a[i]!=5)
			return 0;
	}
	return 1;
}
main(){
	int a, n, c, i=1, j;
	printf("Enter The Number Of Inputs : ", &a);
	scanf("%d", &a);
	for(j=1;j<=a;j++){
		c=0;
		i=0;
		printf("\n\nEnter The %dth Number : ", j);
		scanf("%d", &n);
		do{
			if(check(++i))
				++c;
		}while(c<n);
		printf("The %dth Ugly Number Is %d.", c, i);
	}
}
