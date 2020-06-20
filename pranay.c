#include<stdio.h>
main()
{
	int a,b,c;
	printf("\n enter a,b ");
	scanf("%d %d",&a,&b);
	a=a+b;
	b=a-b;
	a=a-b;
	printf("%d %d",a,b);
}
