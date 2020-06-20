#include<stdio.h>
main(){
	int a[3][3]={0, 1, 0, 0, 1, 0, 1, 1, 1}, i, j, n=3, m=3, b, l, area[10], size=0;
//	scanf("%d%d", &m, &n);
//	for(i=0;i<m;i++)
//		for(j=0;j<n;j++)
//			scanf("%d", &a[i][j]);
	for(i=0;i<m;i++){
		for(j=0;j<n;j++)
			printf("%2d", a[i][j]);
		puts("");
	}
	for(i=0;i<m;i++){
		for(j=0;j<n;j++){
			if(a[i][j]);
			}
	}
	int max=area[0];
	printf("\n%2d", area[i]);
	for(i=1;i<size;i++)
	{	
		printf("%2d",area[i]);
		if(area[i]>max)
			max=area[i];
	}
	printf("\n%d", max);
}
/*
{
				for(b=i;b<m;b++){
					for(l=j;l<n;l++){
						if(!a[b][l])
						{
							area[size++]=(b-i+1)*(j);
							break;
						}
					}
				}
				for(l=j;l<n;l++){
					for(b=i;b<m;b++){
						if(!a[l][b])
						{
							area[size++]=(i)*(l-j+1);
							break;
						}
					}
				}
			}
		
*/
