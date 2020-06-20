#include<stdio.h>
main(){
	int num, temp, a=num, flag=0, b;
	scanf("%d", &num);
	a=b=num;
	while(num>0&&!flag){
		temp=num%10;
		a=b;
		while(a>0){
			if(temp==a%10){
				printf("Not Unique!");
				flag=1;
				break;
			}
			a/=10;
		}
		num/=10;
	}
	if(!flag)
		printf("Unique!");
}
