#include<stdio.h>
main(){
	int a[10], i, n, j;
	scanf("%d", &n);
	for(i=0;i<n;i++)
		scanf("%d", &a[i]);
	for(i=n-1;i>=0;i--)
		if(a[i]==a[i+1]){
			for(j=i+1;j<n;j++){
				a[j]=a[j+1];
			}
			n--;
		}
	for(i=0;i<n;i++)
		printf("%2d", a[i]);	
}
