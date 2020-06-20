#include<stdio.h>
int str(char a[], char b[]){
	int i;
	while(a[i]!='\0'&&b[i]!='\0'){
		if(a[i]>b[i])
			return 1;
		else if(a[i]<b[i])
			return -1;
	}
	return 0;
}
main()
{
		printf("%d", str("sefdwgfs", "werserfv"));
}
