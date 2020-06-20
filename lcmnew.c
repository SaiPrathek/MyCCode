#include<stdio.h>
void main(){
	int n, m;
	scanf("%d%d", &n, &m);
	int min = n<m?n:m;
	int i = min/2;
	int l;
	if(n==0 || m==0)
		printf("Numbers should be non zero");
	else{
		for(;i>=2;i--){
			if(n%i==0 && m%i==0){
				l= (n*m)/i;
				break;
			}	
		}	
		printf("LCM of %d and %d is %d", n, m, l);
	}	
}
