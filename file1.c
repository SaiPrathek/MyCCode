#include<stdio.h>
main(){
	FILE *fp1, *fp2;
	char s;
	fp1=fopen("C:\\Dev-Cpp\\file_handling\\input.txt", "r");
	fp2=fopen("C:\\Dev-Cpp\\file_handling\\ouput.txt", "w");
	if(fp1==NULL)
		printf("Invalid File");
	else{
		while((s=fgetc(fp1))!=EOF)
			fputc(s, fp2);
	}
	fclose(fp1);
	fclose(fp2);
}
