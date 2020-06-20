 #include<stdio.h>
int sum(int a[], int m, int n){
	int i=m, sum=0;
	for(i=m;i<=n;i++)
		sum+=a[i];
	return sum;
}
main(){
	int a[10];
	int i, j, m, n, max, k, l, x;
	scanf("%d", &n);
	for(i=0;i<n;i++)
		scanf("%d", &a[i]);
	scanf("%d", &x);
	max=sum(a, 0, x-1);
	for(i=0;i<n;i++){
		for(j=i;j<n;j++){
			if(max<sum(a, i, j)&&j-i==x-1){
				max=sum(a, i, j);
				m=i;
				l=j;
			}
		}
	}
	for(k=m;k<=l;k++)
		printf("%2d", a[k]);
	printf("\n%d", max);
}
