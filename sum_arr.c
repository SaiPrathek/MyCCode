#include<stdio.h>
main(){
	int i, a[10], n, sum=0;
	printf("Enter n numbers");
	scanf("%d", &n);
	for(i=0;i<n;i++)
		scanf("%d", &a[i]);
	for(i=0;i<n;i++)
		sum+=a[i];
	printf("%d", sum);
}
