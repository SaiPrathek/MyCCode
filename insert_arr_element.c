#include<stdio.h>
main() {
	int a[10], x, pos, n, i;
	printf("Enter The Number Of Elements : ");
	scanf("%d", &n);
	printf("Enter Elements :\n");
	for(i=0; i<n; i++)
		scanf("%d", &a[i]);
	printf("Enter Element and Position : ");
	scanf("%d%d", &x, &pos);
	for(i=n-1; i>=pos-1; i--)
		a[i+1]=a[i];
	a[pos-1]=x;
	printf("%d", a[0]);
	for(i=1; i<n+1; i++)
		printf("%3d", a[i]);
}
