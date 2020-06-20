#include<stdio.h>
int main(){
	char arr[15] = "pointer array";
	int *ptr, i;
	ptr = arr;
	for(i=0;i<4;i++)
		printf("%c", ptr[i]);
	return 0;
}
