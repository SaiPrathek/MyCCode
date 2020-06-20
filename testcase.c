#include<stdio.h>
int main(){
	int n, temp = 0, temp_1, temp_2;
	scanf("%d", &n);
	int a[n];
	int i, j;
	for(i=0;i<n;i++)
		scanf("%d", &a[i]);
	for(i=0;i<n;i++){
		for(j=0;j<i;j++){
			if(temp==0)
				temp = abs(a[i]+a[j]);
			else{
				if(temp>abs(a[i]+a[j])){
					temp = abs(a[i]+a[j]);
					temp_1 = i;
					temp_2 = j;
				}
			}
		}
	}
	printf("%d %d", a[temp_1], a[temp_2]);
	return 1;
}
