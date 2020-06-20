#include<stdio.h>
main(){
	char ch;
	FILE *fp1;
	fp1=fopen("C:\\Dev-Cpp\\file_handling\\input.txt", "r");
	if(fp1==NULL)
		printf("Invalid File");
	else{
		while((ch=fgetc(fp1))!=EOF)
			printf("%c", ch);
	}
	fclose(fp1);
}
