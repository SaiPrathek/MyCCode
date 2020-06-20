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
main(){
	int n, a=1, b=1, c, j;
	printf("\nEnter The Number Of Inputs : ");
	scanf("%d", &c);
	for(j=1;j<=c;j++){
		puts("");
		printf("\nEnter Number %d : ", j);		
		scanf("%d", &n);
		if(n%2!=0){
			printf("%d Is Not An Even Number.", n);
			continue;
		}
		while(1){
			if(prime(a)&&prime(b)){
				if(a+b==n){
					printf("%d+%d=%d", b, a ,n);
					break;
				}
			}
			if(a<n)
				a++;
			else{
				a=1;
				b++;
			}
		}
	}
}
