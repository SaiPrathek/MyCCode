#include<stdio.h>
int c;
int prime(int n){
	int i=2;
	while(i<=n/2){
		if(n%i==0)
			return 0;
		i++;
	}
	return 1;
}
int ugly(int a[], int n){
	int i;
	for(i=0;i<n;i++){
		if(a[i]!=2&&a[i]!=3&&a[i]!=5)
			return 0;	
	}
	return 1;
}
int check(int n){
	int i=2, a[10], size=0;
	while(i<=n/2){
		if(n%i==0&&prime(i))
			a[size++]=i;
		i++;
	}
	return ugly(a, size);
}
main(){
	int a, n, i=1, j;
	printf("Enter The Number Of Inputs : ", &a);
	scanf("%d", &a);
	for(j=1;j<=a;j++){
		puts("");
		c=1;
		i=1;
		switch (j){
			case 1:printf("Enter The 1st Number : ");break;
			case 2:printf("\nEnter The 2nd Number : ");break;
			case 3:printf("\nEnter The 3rd Number : ");break;
			default:printf("\nEnter The %dth Number : ", j);
		}
		scanf("%d", &n);
		while(c<n){
			if(check(i))
				c++;
			i++;
		}
		switch (c){
			case 1:printf("The 1st Ugly Number Is 1.");break;
			case 2:printf("The 2nd Ugly Number Is 2.");break;
			case 3:printf("The 3rd Ugly Number Is 3.");break;
			default:printf("The %dth Ugly Number Is %d.", c, i);
		}
	}
}
