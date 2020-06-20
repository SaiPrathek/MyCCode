#include<stdio.h>
#include<math.h>
int sum(int a[], int n){
	int i=0, sum=0;
	for(;i<n;i++)
		sum+=a[i];
	return sum;
}
main(){
	int a[10], b[10], c[10], i , j, temp, n, s1=0, s2=0;
	scanf("%d", &n);
	for(i=0;i<n;i++)
		scanf("%d", &a[i]);
	for(i=0;i<n-1;i++){
		for(j=i+1;j<n;j++){
			if(a[i]<a[j]){
				temp = a[i];
				a[i] = a[j];
				a[j] = temp;
			}
		}
	}
	b[s1++]=a[0];
	c[s2++]=a[1];
	for(i=2;i<n;i++){
		if(sum(c, s2)<sum(b, s1))
			c[s2++]=a[i];
		else
			b[s1++]=a[i];
	}
	for(i=0;i<s1;i++)
		printf("%3d", b[i]);
	puts("");
	for(i=0;i<s2;i++)
		printf("%3d", c[i]);
	printf("\nDifference = %d", abs(sum(c, s2)-sum(b, s1)));
}
