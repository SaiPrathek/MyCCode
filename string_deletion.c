#include<stdio.h>
main(){
	char c[20], i=0, pos=-1, f;
	printf("Enter The String : ");
	scanf("%s", &c);
	p rintf("Enter The Character To Be Deleted : ");
	scanf("%c", &f);
	printf("%c", (char)f);
	while(c[i]!='\0'){
		if(c[i++]==f){
			pos=i;
			break;
		}
	}
	if(pos>=0)
		printf("%d", i);
	else
		printf("Not Found!");
}
