#include<stdio.h>
#include<string.h>
main(){
	char s[20], ss[10];
	int i, j, t, f, l;
	gets(s);
	gets(ss);
	l=strlen(ss);
	for(i=0;s[i]!='\0';i++){
		f=0;
		for(j=0, t=i;ss[j]!='\0';j++,t++){
			if(s[t]!=ss[j]){
				f=1;
				break;
			}
		}
		if(!f){
			for(;s[i]!='\0';i++){
				s[i]=s[i+l];
			}
			s[i]='\0';
			puts(s);
			break;
		}
	}
	if(f)
		printf("Not Found.");
}
