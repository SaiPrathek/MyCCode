#include<stdio.h>
#include<string.h>
main()
{
	char s[30]="hi my name is pranay", i=strlen(s), count=0;
	printf("%d%c", i, s[i-1]);
    while(s[i-- - 1]!=" "){
    		count++;
	}
	printf("%d", count);
}
