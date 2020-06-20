#include<stdio.h>
main()
{
	int n, i=2, flag=0, rev=0, a;
	scanf("%d", &n);
	a=n;
	while(i<=n/2&&n>1)
	{
		if(n%i==0)
		{
			flag=1;	
		}
		i++;
	}
	if(flag==0)
	{
		while(n>0)
		{
			rev=rev*10+n%10;
			n/=10;
		}
		i=2;
		while(i<=rev/2)
		{
			if(rev%i==0)
			{
				flag=1;
				break;
			}
			i++;
		}
	}
	if(flag==0)
		printf("%d Is Twisted", a);
	else
		printf("%d Is Not Twisted", a);
} 
