#include<stdio.h>
#include<string.h>
main(){
	char s[20], ss[10];
	int i, j, t, f;
	gets(s);
	gets(ss);
//	l=strlen(s);
	for(i=0;s[i]!='\0';i++){
		f=0;
		for(j=0, t=i;ss[j]!='\0';j++,t++){
			if(s[t]!=ss[j]){
				f=1;
				break;
			}
		}
		if(!f){
			printf("%d", i+1);
			break;
		}
	}
	if(f)
		printf("Not Found.");
	// puts(s);
}
