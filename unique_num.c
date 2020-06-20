#include<stdio.h>
main()
{
	int n, u[10], size=0, i, flag=0, temp;
	// scanf("%d", &n);
	n=12348756;
	while(n>0)
	{
		u[size++]=n%10;
		n/=10;
	}
	for(i=size-1;i>=0&&flag!=1;i--)
	{
		temp=u[i];
		flag=0;
		for(n=0;n<i-1;n++)
		{
			if(temp==u[n])
			{
				flag=1;
				break;
			}
		}	
	}	
	if(flag==0)
		printf("Unique");
	else
		printf("Not Unique");
}
