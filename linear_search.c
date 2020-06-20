#include<stdio.h>
main()
{
	int a[10]={1, 45, 3, 536, 34, 5, 32, 42, 34 , 234}, i, pos=-1, n=10, x;
	scanf("%d", &x);
	for(i=0;i<n;i++){
		if(a[i]==x){
			pos=i;
		}
	}
	if(pos==-1)
		printf("Not Found");
	else
		printf("%d", pos+1);
}
