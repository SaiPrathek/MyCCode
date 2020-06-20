#include<stdio.h>
void sort(int a[], int n){
	int i, j, temp;
	for(i=0;i<n-1;i++){
		for(j=i+1;j<n;j++){
			if(a[i]>a[j]){
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
	}
}
main(){
	int a[]={35, 0,572,43 ,7 ,597,243,46 ,875,34}, i, n=10;
	for(i=0;i<n;i++)
		printf("%5d", a[i]);
	sort(a, n);
	puts("");
	for(i=0;i<n;i++)
		printf("%5d", a[i]);
}
