#include<stdio.h>
int pallindrome(int n){
	int i, a=n, b;
	while(n>0){
		b=b*10+n%10;
		n/=10;
	}
	if(a!=b)
		return 0;
	return 1;
}
main(){
	int c, n, i, j, num, f=1;
	printf("\nEnter The Number Of Inputs : ");
	scanf("%d", &c);
	for(j=1;j<=c;j++){
		num=0;
		puts("");
		printf("\nEnter Number Length %d : ", j);
		scanf("%d", &n);
		int a[n];
		printf("Enter The Digits %d : ");
		for(i=0;i<n;i++)
			scanf("%d", &a[i]);
		for(i=n-1;i>=0;i--){
			num=num+a[i]*f;
			f*=10;
		}
		i=num;
		while(1){
			if(pallindrome(i)){
				printf("%d", i);
				break;
			}
//			printf("%d", pallindrome(i));
			i++;
		}
	}
}
