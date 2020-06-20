#include<stdio.h>
main()
{
	int a[10]={34, 54, 123, 267, 334, 374, 386 , 425, 496, 525}, i, high=9, low=0, mid, x;
	scanf("%d", &x);
	while(low<=high)
	{
		mid=(high+low)/2;
		// printf("\n%d - %d = %d - %d", low, mid, a[mid], high);
		if(a[mid]>x)
			high=mid-1;
		else if(a[mid]<x)
			low=mid+1;
		else
		{
			printf("%d", mid+1);
			break;
		}
	}	
	if(low>high)
		printf("Not Found");
}
