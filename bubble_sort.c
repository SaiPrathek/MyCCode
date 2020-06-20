#include<stdio.h>
main()
{
	int a[10]={61, 94, 33, 24, 35, 36, 77, 81, 19, 20}, i, j, temp, n=10;
	for(i=0;i<n;i++)
		printf("%3d", a[i]);
	for(i=0;i<n-1;i++){
		for(j=i+1;j<n;j++){
			if(a[i]>a[j]){
				temp = a[i];
				a[i] = a[j];
				a[j] = temp;
			}
		}
	}
	printf("\n");
	for(i=0;i<n;i++)
		printf("%3d", a[i]);
}
