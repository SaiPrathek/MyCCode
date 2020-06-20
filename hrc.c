#include<stdio.h>
#include<string.h>
main()
{
	char s[100];
	scanf("%100[0-9a-zA-z .,!?'']", &s);
	yoda(s);
	printf("%s", s);
}
yoda(char *s){
	char a[100];
	int i=strlen(s), count=0, j, f=0;
	if(s[0]!='I'&&s[0]>='A'&&s[0]<='Z')
		s[0]+=32;
	if(s[strlen(s)-1]=='.'){
		i--;
		f=1;
	}
    while(s[i-- -1]!=' ')
    		a[count++]=s[i];
	for(i=strlen(s);i>=0;i--)
		s[i+count+2]=s[i];
	if(a[count-1]>='a'&&a[count-1]<='z')
		a[count-1]-=32;
	for(i=count-1, j=0;i>=0;i--,j++)
		s[i]=a[j];
	s[count]=',';
	s[count+1]=' ';
	if(f){
		s[strlen(s)-count-2]='.';
	}
	s[strlen(s)-count-1]='\0';
}
