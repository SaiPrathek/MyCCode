#include<stdio.h>
main() {
	char choice;
	printf("Enter Your Choice : ");
	choice = getch();
	switch(choice) {
		case 'c':
			putch('c');
			int s;
			scanf("%d",&s);
			printf("%d", s*s*s);
			break;
		case 's':
			putch('s');
			int r;
			scanf("%d",&r);
			printf("%f", 4*3.14*r*r);
			break;
		case 'u':
			putch('u');
			int l, b, h;
			scanf("%d%d%d", &l, &b, &h);
			printf("%d", l*b*h);
			break;
		default :
			putch('i');
	}
}

